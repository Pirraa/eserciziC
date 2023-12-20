#include<stdio.h>
#include<stdlib.h>
#include "listaPazienti.h"

int main(int argc, char*argv[])
{
    FILE *pf;
    Lista l;
    Rilevazione r;
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
    while(fread(&r,sizeof(Rilevazione),1,pf)==1)
    {
        aggiornaPazienti(&l,r);
    }
    stampa(l);
}