[![CI](https://github.com/duaneking/c_lib_example/actions/workflows/makefile.yml/badge.svg)](https://github.com/duaneking/c_lib_example/actions/workflows/makefile.yml)


# c_lib_example
Simple C lib example for a friend, possibly you.

## Build Layout

In general when writting a cli tool, you should make the core of the app a library used by the main application anyway.

With this in mind, the main binary is just a simple validation test that the sample bubble sorting happens as expected.

Here is the build flow:

```mermaid
stateDiagram-v2
    [*] --> Start

    Start --> Build
    
    state Build {
        environment --> make

        [*] --> make

        state make {
            [*] --> ci

            state ci {
                [*] --> clean
                
                state clean {
                    [*] --> [*]: "clean build artifacts"
                }

                clean --> build

                state build {
                    [*] --> [*]: "main.o lib.o --> main.c lib.c -o main"
                }

                build --> test

                state test {
                    [*] --> [*]: "./main"
                }

                test --> [*]
            }

            ci --> [*]
        }

        make --> [*]
    }

    Build --> End

    End --> [*]
```
