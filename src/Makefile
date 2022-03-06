all: ci

clean-build: clean build

test: clean-build
	@echo "[BUILD] C Lib Experiment."
	chmod 755 main && ./main test

main: main.o lib.o
	gcc -o main main.o lib.o

main.o: main.c lib.h
	gcc -c -g main.c

lib.o: lib.c lib.o
	gcc -c -g lib.c

build: main
	@echo "[BUILD] C Lib Experiment."

clean:
	@echo "[CLEAN] C Lib Experiment."
	rm -rf *.stackdump *.exe *.output *.o main

ci: clean-build 
	@echo "[CI] C Lib Experiment."
	$(MAKE) test
	git status

mistakes: clean-build
	@echo "[MISTAKES] C Lib Experiment."
	$(MAKE) clean
	git status
