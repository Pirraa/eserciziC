#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"listaUrl.h"


int main(int argc,char *argv[])
{
    FILE *pf;
    Lista l,lOrd;
    Record r;
    int chiusura;
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
    inizializza(&l);
    while(fread(&r,sizeof(Record),1,pf)==1)
    {
        aggiorna(&l,r);
        //parte2
        //aggiorna2(&l,r);
    }
    stampa(l);
    chiusura=fclose(pf);
    if(chiusura!=0){
        printf("Errore chiusura\n");
        exit(2);
    }

    //parte 2
    //printf("\n");
    //ordina(l, &lOrd);
    //stampa2(lOrd);
    return 0;
}