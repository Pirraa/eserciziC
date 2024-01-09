#include<stdio.h>
#include<stdlib.h>
#include"listaImmobili.h"

int main(int argc,char*argv[])
{
    Lista l;
    Record r;
    FILE *pf;
    FILE *pf2;
    int a;
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
        insOrd(&l,r);
    }
    stampa(l);
    fclose(pf);
    printf("Inserisci vani: ");
    scanf("%d",&a);
    pf2=fopen("vani.txt","wt");
    if(pf2==NULL)
    {
        printf("Errore apertura file\n");
        exit(2);
    }
    Lista l2;
    inizializza(&l2);
    while(l)
    {
        if(l->r.n_vani>=a)
        {    
            insOrd2(&l2,l->r);
        }
        l=l->next;
    }
    printf("\n\n");
    stampa(l2);
    return 0;
}