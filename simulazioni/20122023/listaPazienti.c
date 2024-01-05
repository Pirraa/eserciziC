#include"listaPazienti.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void inizializza(Lista *l)
{
    *l=NULL;
}
//scorro la lista e ricerco il paziente, confrotando i codici fiscali con quello della rilevazione
//se trovo un un codice fiscale uguale aggiorno temperatura saturazione e numero rilvazioni
//se non lo trovo aggiungo una nuova persona con temperatura e saturazione 0
void aggiornaPazienti(Lista *l,Rilevazione r)
{
    while(*l)
    {
        if(strcmp((*l)->dato.codice_fiscale,r.codice_fiscale)==0)
            break;
        else
            l=&(*l)->next;
    }
    if(*l==NULL)
    {
        Dato d;
        strcpy(d.codice_fiscale,r.codice_fiscale);
        d.num_rilevazioni=1;
        d.somma_sat=r.saturazione;
        d.somma_temp=r.temp;
        insTesta(l,d);
    }else{
        aggiornaPaziente(l,r);
    }
}

void insTesta(Lista *pl, Dato d)
{
    Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
    if (aux == NULL) exit(100); // allocazione non riuscita
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void aggiornaPaziente(Lista *l,Rilevazione r)
{
    (*l)->dato.num_rilevazioni++;
    (*l)->dato.somma_sat+=r.saturazione;
    (*l)->dato.somma_temp+=r.temp;
}

void stampa(Lista l) {
  while (l) {
    printf("%s ", l->dato.codice_fiscale);
    printf("%.1f ", l->dato.somma_temp/l->dato.num_rilevazioni);
    printf("%.1f ", l->dato.somma_sat/l->dato.num_rilevazioni);
    printf("\n");
    l = l->next;
  }
  printf("\n");
}