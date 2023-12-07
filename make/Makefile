rq: main.o radq.o
	gcc -g -o rq main.o radq.o

radq.o: radq.c
	gcc -c radq.c

main.o: main.c radq.h
	gcc -c main.c
