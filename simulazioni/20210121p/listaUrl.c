#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"listaUrl.h"


void aggiorna(Lista *l,Record r)
{
    while((*l)!=NULL && strcmp((*l)->dato.url,r.url)!=0)
        l=&(*l)->next;
    if(*l==NULL)
    {
        Dato d;
        d.cnt=0;
        strcpy(d.url,r.url);
        insTesta(l,d);
    }
    (*l)->dato.cnt++;
}

void inizializza(Lista *l)
{
    *l=NULL;
}

void stampa(Lista l)
{
    while(l)
    {
        if(l->dato.cnt>=5)
            printf("%s %d \n",l->dato.url,l->dato.cnt);
        l=l->next;
    }
    printf("\n");
}

void insTesta(Lista *l,Dato d)
{
    Nodo* aux=(Nodo*)malloc(sizeof(Nodo));
    aux->dato=d;
    aux->next=*l;
    *l=aux;
}











//seconda parte
int confrontoOrari(int o1, int m1, int o2, int m2) {
  // restituisce un valore < 0 se o1:m1 precede o2:m2
  // 0 se o1:m1 e o2:m2 sono uguali
  // > 0 se o1:m1 segue o2:m2
  if (o1 != o2)
    return o1 - o2;
  else
    return m1 - m2;
}

int confrontoDati(Dato d1, Dato d2) {
  // restituisce un valore < 0 se d1 precede d2
  // secondo la relazione d'ordine specificata nella parte 2
  // = 0 se sono uguali ai fini dell'ordine
  // > 0 se  d2 precede d1
  if (d1.cnt != d2.cnt)
    return d2.cnt - d1.cnt;
  else
    return -confrontoOrari(d1.oreUltimaVisita, d1.minutiUltimaVisita,
                           d2.oreUltimaVisita, d2.minutiUltimaVisita);
}

void insOrd(Lista* pl, Dato d) {
  while (*pl && confrontoDati((*pl)->dato, d) < 0)
    pl = &(*pl)->next;
  insTesta(pl, d);
}

void ordina(Lista l, Lista* plOrd) {
  // *plOrd è l ordinata con insertionSort
  inizializza(plOrd);
  while (l) {
    insOrd(plOrd, l->dato);
    l = l->next;
  }
}

void stampa2(Lista l)
{
    while (l != NULL) {
    if (l->dato.cnt >= 5)
      printf("%s %d %d:%s%d\n", l->dato.url, l->dato.cnt,
             l->dato.oreUltimaVisita,
             (l->dato.minutiUltimaVisita < 10 ? "0" : ""),
             l->dato.minutiUltimaVisita);
    l = l->next;
   }
}

void aggiorna2(Lista *l,Record r)
{
    // se non esiste un elemento per l'URL lo crea,
  // altrimenti ne incrememnta il contatore
  // e se necessario aggiorna l'orario della visita più recente
  int trovato = 0;
  while (!trovato && *l != NULL) {
    if (strcmp((*l)->dato.url, r.url) == 0) {
      (*l)->dato.cnt++;
      if (confrontoOrari((*l)->dato.oreUltimaVisita,
                         (*l)->dato.minutiUltimaVisita, r.ora, r.minuti) < 0) {
        (*l)->dato.oreUltimaVisita = r.ora;
        (*l)->dato.minutiUltimaVisita = r.minuti;
      }
      trovato = 1;
    }
    l = &(*l)->next;
  }
  if (!trovato) {
    Dato d;
    strcpy(d.url, r.url);
    d.cnt = 1;
    d.oreUltimaVisita = r.ora;
    d.minutiUltimaVisita = r.minuti;
    insTesta(l, d);
  }
}