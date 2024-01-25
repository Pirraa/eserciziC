#include<stdio.h>
#include<stdlib.h>
#include "listaGiornate.h"

int main(int argc, char*argv[])
{
    FILE *pf;
    Lista l;
    Record r;
    if(argc!=2)
    {
        printf("File non presente");
        exit(1);
    }   
    pf=fopen(argv[1],"rb");
    if(pf==NULL)
    {
        printf("errore");
        exit(2);
    }
    inizializza(&l);
    while(fread(&r,sizeof(Record),1,pf)==1)
    {
        aggiorna(&l,r);
    }
    //stampa(l);
    Lista l2;
    inizializza(&l2);
    while(l)
    {
        insOrd(&l2,l->dato);
        l=l->next;
    }
    stampa(l2);
    return 0;
}