frequenze: listaParole.o main.o
	gcc -g -o frequenze listaParole.o main.o

listaParole.o: listaParole.c listaParole.h
	gcc -g -c listaParole.c

main.c: main.c listaParole.h
	gcc -g -c main.c