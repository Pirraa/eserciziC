array: main.o lista.o
	gcc -g -o array lista.o main.o

main.o: lista.h main.c
	gcc -g -c main.c

lista.o: lista.h lista.c
	gcc -g -c lista.c