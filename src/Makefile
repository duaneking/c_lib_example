all: ci

clean-build: clean build

test: clean-build
	@echo "[BUILD] C Lib Experiment."
	chmod 755 main && ./main test

build:
	@echo "[BUILD] C Lib Experiment."
	gcc -c -g lib.c -lm
	gcc -c -g main.c -lm
	gcc -o main main.o lib.o

clean:
	@echo "[CLEAN] C Lib Experiment."
	rm -rf *.stackdump *.exe *.output *.o main

ci: clean-build 
	@echo "[CI] C Lib Experiment."
	git status
	$(MAKE) clean

mistakes: clean-build
	@echo "[MISTAKES] C Lib Experiment."
	$(MAKE) clean
	git status
