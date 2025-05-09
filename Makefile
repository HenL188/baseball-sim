CFLAGS := -Wall -Werror -Wextra -O2 -march=native -lm

all: main run

main.o: main.c
	cc -c main.c

lib.o: lib.c
	cc -c lib.c

main: main.o lib.o
	cc main.o lib.o $(CFLAGS) -o main

run: main
	./main
