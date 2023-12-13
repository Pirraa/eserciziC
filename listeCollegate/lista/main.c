#include<stdio.h>
#include"lista.h"

int main()
{
    Lista l;
    listaNonOrdinata(&l,5);
    printf("Lista: ");
    stampa(l);
    printf("Massimo: %d\n",massimo(l));
    printf("Somma: %d\n",somma(l));
    azzera(l);
    printf("Azzeramento: ");
    stampa(l);
    printf("Lunghezza: %d\n",lunghezza(l));
    return 0;
}