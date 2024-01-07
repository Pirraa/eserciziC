#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"listaVeicoli.h"

int main(int argc,char*argv[])
{
    Lista l;
    Record r;
    FILE *pf;
    FILE *pf2;
    int chiusura;
    Record ultimeTre[3];
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
    pf2=fopen("ultimi3.txt","wt");
    if(pf2==NULL)
    {
        printf("Errore apertura file\n");
        exit(2);
    }
    inizializza(&l);
    while(fread(&r,sizeof(Record),1,pf)==1)
    {
        aggiorna(&l,r);
    }
    fseek(pf, -3*sizeof(Record), SEEK_END);
    for(int i=0; i<=2;i++)
    {
        fread(&ultimeTre[i],sizeof(Record),1,pf);
    }
    stampa(l);
    for (int i = 2; i >= 0; i--) {
        fprintf(pf2, "%s\n", ultimeTre[i].targa);
    }

    chiusura=fclose(pf);
    if(chiusura!=0){
        printf("Errore chiusura\n");
        exit(2);
    }
    return 0;
}