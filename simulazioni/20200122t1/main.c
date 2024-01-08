#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"listaCani.h"

int main(int argc,char*argv[])
{
    Lista l;
    Record r;
    FILE *pf;
    if(argc!=2)
    {
        printf("Errore argomenti\n");
        exit(1);
    }
    pf=fopen(argv[1],"rb");
    if(pf==NULL)
    {
        printf("Errore apertura file\n");
        exit(2);
    }
    inizializzaLista(&l);
    while(fread(&r,sizeof(Record),1,pf)==1)
    {
        aggiorna(&l,r);
    }
    stampa(l);
    return 0;
}