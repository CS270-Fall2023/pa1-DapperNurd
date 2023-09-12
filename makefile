pa1: main.o pa1.o
	gcc main.o pa1.o -o pa1

main.o: main.c pa1.h
	gcc -c main.c

pa1.o: pa1.c pa1.h
	gcc -c pa1.c