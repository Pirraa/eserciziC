palestra: main.o listaUtenti.o
	gcc -g -o palestra main.o listaUtenti.o

listaUtenti.o: listaUtenti.c listaUtenti.h
	gcc -g -c listaUtenti.c

main.o: main.c listaUtenti.h
	gcc -g -c main.c