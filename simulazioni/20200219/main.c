#include<stdio.h>
#include<stdlib.h>
#include"listaUtenti.h"

int main(int argc, char*argv[])
{
    FILE *pf;
    Record r;
    Lista l;
    char telefono[11];
    int minuti;
    if(argc!=3){
        printf("Argomenti errati\n");
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
        inserisciUtenti(&l,r);
    }
    pf=fopen(argv[2],"rt");
    if(pf==NULL)
    {
        printf("Errore apertura file\n");
        exit(3);
    }
    while(fscanf(pf,"%s %d",telefono,&minuti)==2)
    {
        aggiornaLista(&l,telefono,minuti);
    }
    stampa(l);
    return 0;
}