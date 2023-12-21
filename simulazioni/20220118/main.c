#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"listaParole.h"

void toLowerCase(char *s)
{
    int i;
    for(i=0; s[i]!='\0';i++)
        if(s[i]>='A' && s[i]<='Z')
            s[i]+='a'-'A';
}

int main(int argc, char*argv[])
{
    FILE *pf;
    Lista l;
    char p[31];
    if(argc<2)
    {
        printf("Errore riga comando\n");
        exit(0);
    }
    pf=fopen(argv[1],"rt");
    if(pf==NULL)
    {
        printf("Errore aperura file\n");
        exit(2);
    }
    nuovaLista(&l);
    while(fscanf(pf,"%s",p)==1)
    {
        toLowerCase(p);
        int trovata=0;
        int i;
        for(i=2; i<argc; i++)
            if(strcmp(argv[i],p)==0)
            {
                trovata=1;
                break;
            }
        if(!trovata)  
            aggiornaLista(&l,p);
    }
    stampa(l);
    fclose(pf);
    return 0;
}