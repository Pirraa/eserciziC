immobili: main.o listaImmobili.o
	gcc -g -o immobili main.o listaImmobili.o

listaImmobili.o: listaImmobili.h listaImmobili.c
	gcc -g -c listaImmobili.c

main.o: listaImmobili.h main.c
	gcc -g -c main.c