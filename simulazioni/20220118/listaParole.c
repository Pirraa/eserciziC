#include<stdio.h>
#include<stdlib.h>
#include"listaParole.h"
#include<string.h>

void nuovaLista(Lista *pl)
{
    *pl=NULL;
}

void insTesta(Lista *pl,Dato d)
{
    Nodo *aux=(Nodo*)malloc(sizeof(Nodo));
    aux->dato=d;
    aux->next=*pl;
    *pl=aux;
}

void stampa(Lista l)
{
    while(l)
    {
        if(l->dato.contatore>=4)
            printf("%s %d\n",l->dato.parola,l->dato.contatore);
        l=l->next;
    }
}

int confrontoStringhe(char *parola1,char* parola2)
{
    //<0 se parola1 precede parola2
    if(strlen(parola1)!=strlen(parola2))
        return strlen(parola2)-strlen(parola1);
    else
        return strcmp(parola1,parola2);
}

void aggiornaLista(Lista *pl,char *p)
{
    Dato d;
    while(*pl!=NULL && confrontoStringhe((*pl)->dato.parola,p)<0)
        pl=&(*pl)->next;
    if(*pl!=NULL && strcmp((*pl)->dato.parola,p)==0)
        (*pl)->dato.contatore++;
    else{
        strcpy(d.parola,p);
        d.contatore=1;
        insTesta(pl,d);
    }
}