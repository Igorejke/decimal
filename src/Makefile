GG=gcc
FLAGS=-Wall -Werror -Wextra

all: test run clean

test: test.c
	$(GG) $(FLAGS) test.c -o test.o -lm

run: test.o
	./test.o 

clean:
	rm -rf *.o

.PHONY: all, run, test, clean, rebuild
