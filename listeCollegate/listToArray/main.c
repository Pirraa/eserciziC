#include<stdio.h>
#include"lista.h"

int main()
{
    Lista l;
    int dim=0;
    listaNonOrdinata(&l,5);
    stampa(l);
    int *p=listaToArray(l,&dim);
    for(int i=0; i<dim; i++)
    {
        printf("Stampo il %d elemento, %d\n",i+1,*(p+i));
    }
}