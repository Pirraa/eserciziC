#include"gioco.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void parola_casuale(char *s)
{
    char parole[100000][50];
    int dl;
    int indice_casuale;
    srand(time(NULL));
    FILE *pf;
    pf=fopen("words_italian.txt","rt");
    if(pf==NULL)
    {
        printf("errore apertura file\n");
        exit(1);
    }
    dl=0;
    while(fscanf(pf,"%s",parole[dl])==1)
        dl++;
    indice_casuale=rand()%dl; //numero compreso fra 0 e dl
    strcpy(s,parole[indice_casuale]);   
}

void inizializza_gioco(Gioco *pg,int v)
{
    char parola[50];
    pg->nvite=v;
    parola_casuale(parola);
    inizializza_parola_segreta(&pg->parolaSegreta,parola);
}

void aggiorna_gioco(Gioco *pg, char c)
{
    int i;
    int trovata=0;
    for(int i=0; i<pg->parolaSegreta.dimensione_logica; i++)
    {
        if(c==pg->parolaSegreta.lettere[i].lettera)
        {
            pg->parolaSegreta.lettere[i].indovinata=1;
            trovata=1;
        }
          
    }
    if(!trovata)  
        pg->nvite--;
}

void stampaGioco(Gioco *pg)
{
    int i;
    for(i=0; i<pg->parolaSegreta.dimensione_logica; i++)
    {
        if(pg->parolaSegreta.lettere[i].indovinata)
            printf("%c",pg->parolaSegreta.lettere[i].lettera);
        else
            printf("_");
    }
    printf("\n");
    printf("vite: %d \n",pg->nvite);
}

int vincente(Gioco *pg)
{
    int i;
    for(i=0; i<pg->parolaSegreta.dimensione_logica; i++)
        if(!pg->parolaSegreta.lettere[i].indovinata)
            return 0;
    return 1;
}

int finito(Gioco *pg)
{
    return vincente(pg) || pg->nvite==0;
}

void stampa_parola_segreta(Gioco *pg)
{
    int i;
    for(i=0; i<pg->parolaSegreta.dimensione_logica; i++)
        printf("%c",pg->parolaSegreta.lettere[i].lettera);
    printf("\n");
}