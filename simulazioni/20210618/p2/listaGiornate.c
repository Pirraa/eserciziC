#include<stdio.h>
#include<stdlib.h>
#include "listaGiornate.h"

void inizializza(Lista *l)
{
    *l=NULL;
}

void aggiorna(Lista *l,Record r)
{
    /*while(*l!=NULL&&(!(*l)->dato.giorno!=r.giorno&&(*l)->dato.mese!=r.mese))
        l=&(*l)->next;
    if(*l==NULL)
    {
        Dato d;
        d.giorno=r.giorno;
        d.mese=r.mese;
        d.totale=0;
        insTesta(l,d);
    }
    (*l)->dato.totale+=r.ore;*/
    while(*l!=NULL)
    {
        if((*l)->dato.giorno==r.giorno&&(*l)->dato.mese==r.mese) 
            break;
        else
            l = &(*l)->next;
    }
    if(*l!=NULL)
    {
        (*l)->dato.totale+=r.ore;
    }else{
        Dato d;
        d.giorno=r.giorno;
        d.mese=r.mese;
        d.totale=r.ore;
        insTesta(l,d);
    }
}

void stampa(Lista l)
{
    while(l)
    {
        printf("%d/%d %.2f\n",l->dato.giorno,l->dato.mese,l->dato.totale);
        l=l->next;
    }
}

void insTesta(Lista *l,Dato d)
{
    Nodo* aux=(Nodo*)malloc(sizeof(Nodo));
    aux->dato=d;
    aux->next=*l;
    *l=aux;
}

int precede(Dato d1,Dato d2)
{
    return d1.mese<d2.mese || d1.mese==d2.mese && d1.giorno<d2.giorno;
}

void insOrd(Lista *l,Dato d)
{
    while (*l) {
    if (precede((*l)->dato,d))  // Da cambiare in base al tipo di ordinamento (se più di un parametro uso OR o AND)
      l = &(*l)->next;
    else
      break;
    }
    insTesta(l, d);
}