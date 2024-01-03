telefonia: main.o listaUtenti.o
	gcc -g -o telefonia main.o listaUtenti.o

listaUtenti.o: listaUtenti.h listaUtenti.c
	gcc -g -c listaUtenti.c

main.o: main.c listaUtenti.h
	gcc -g -c main.c