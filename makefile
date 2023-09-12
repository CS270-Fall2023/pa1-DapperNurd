# Macros
CC = gcc
FLAGS = -Wall -g

all: pa1
clean:
	rm -f pa1 *.o

pa1: main.o pa1.o
	$(CC) $(FLAGS) main.o pa1.o -o pa1

main.o: main.c pa1.h
	$(CC) $(FLAGS) -c main.c

pa1.o: pa1.c pa1.h
	$(CC) $(FLAGS) -c pa1.c