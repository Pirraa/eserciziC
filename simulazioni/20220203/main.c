#include<stdio.h>
#include<stdlib.h>
#include"listaUtenti.h"

int main(int argc, char*argv[])
{
    FILE *pf;
    char str[17];
    Lista l;
    int attività;
    if(argc!=3)
    {
        printf("Errore numero argomenti!\n");
        exit(1);
    }
    pf=fopen(argv[1],"rb");
    if(pf==NULL)
    {
        printf("Errore apertura file\n");
        exit(2);
    }
    inizializza_lista(&l);
    while(fread(str,sizeof(str),1,pf)==1)
    {
        inizializza_utente(&l,str);
    }

    pf=fopen(argv[2],"rt");
    if(pf==NULL)
    {
        printf("Errore apertura file\n");
        exit(2);
    }
    while(fscanf(pf,"%s %d",str,&attività)==2)
    {
        aggiornalista(&l,str,attività);
    }
    stampa(l);
    return 0;
}