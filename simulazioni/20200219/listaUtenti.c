#include<stdio.h>
#include<stdlib.h>
#include"listaUtenti.h"
#include<string.h>

void inizializzaLista(Lista *l)
{
    *l=NULL;
}
void inserisciUtenti(Lista *l,Record r)
{
    Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
    if (aux == NULL) exit(100); // allocazione non riuscita
    aux->dato = r;
    aux->next = *l;
    *l = aux;
}
void aggiornaLista(Lista *l,char *telefono,int minuti)
{
    while (*l) {
    // se l'elemento corrente ha la proprieta` desiderata
    if (strcmp((*l)->dato.telefono,telefono)==0)
        break;
    l = &(*l)->next;
    }
    if((*l)->dato.tariffa=='A')
    {
        float a=0.15;
        int b=minuti/60;
        (*l)->dato.credito-=(a+0.08*b);
    }else{ 
        float c=0.12/60*minuti;
        (*l)->dato.credito-=c;
    }
}
void stampa(Lista l)
{
    while (l) {
        printf("%s %f", l->dato.telefono,l->dato.credito);
        l = l->next;
        printf("\n");
    }
    printf("\n");
}