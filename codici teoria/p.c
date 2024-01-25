#include<stdio.h>
int main()
{
    //dichiaro variabile di tipo intero e variabile di tipo char
    int i=53;
    char c='c';
    //dichiaro variabile puntatore a char e variabile puntatore a intero
    int *pi;
    char *pc;
    //assegno al puntatore ad intero l'indirizzo della variabile char, convertendolo in indirizzo di intero
    //cosa succede? pi contiene l'indirizzo di c ma il valore puntato da pi non corrisponde alla c o al suo valore ascii ma ad un intero casuale 
    pi=(int *)&c;
    //assegno al puntatore a char l'ndirizzo della variabile int, convertendolo in indirizzo di un char
    //cosa succede? pc contiene l'indirizzo di i e il valore puntato da pc corrisponde al carattere ascii corrispondente al numero intero (per 53 è il 5)
    pc=(char *)&i;

    //faccio la stessa cosa senza conversioni e mi accorgo che il risultato è lo stesso ma con dei warning dal compilatore
    int n=52;
    char l='a';
    int *pi2;
    char *pc2;
    pi2=&l;
    pc2=&n;

    //assegno ad un puntatore a carattere il puntatore ad intero, conterranno lo steso indirizzo, ma il valore referenziato da pc sarà il caratterer corrispondente all'ascii dei primi due interi del valore puntato da pi
    pc=(char *)pi;
    //assegno ad un puntatore ad intero il puntatore a carattere, conterranno lo stesso indirizzo, ma il valore referenziato da pi2 sarà il valore ascii del carattere referenziato da pc2
    pi2=(int *)pc2;
}