#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"listaCani.h"

void inizializzaLista(Lista *pl)
{
    *pl=NULL;
}

void inserimentoTesta(Lista *pl,Dato d)
{
    Nodo *aux=(Nodo*)malloc(sizeof(Nodo*));
    aux->dato=d;
    aux->next=*pl;
    *pl=aux;
}

void aggiorna(Lista *pl,Record r)
{
    while((*pl))
    {
        if((*pl)->dato.chip==r.chip)
            break;
        pl=&(*pl)->next;
    }
    if((*pl)!=NULL)
    {
        switch(r.vaccino)
        {
            case 'C':
               (*pl)->dato.cinurro=1; 
            break;
            case 'P':
                (*pl)->dato.parvovirosi=1; 
            break;
            case 'E':
                (*pl)->dato.epatite=1; 
            break;
        }
    }else{
        Dato d;
        d.chip=r.chip;
        switch(r.vaccino)
        {
            case 'C':
                d.cinurro=1; 
                d.parvovirosi=0;
                d.epatite=0;
            break;
            case 'P':
                d.parvovirosi=1; 
                d.cinurro=0;
                d.epatite=0;
            break;
            case 'E':
                d.epatite=1;
                d.parvovirosi=0;
                d.cinurro=0; 
            break;
        }
        inserimentoTesta(pl,d);
    }
}

/*aggiornamento prof alberti
void aggiorna(Lista* pl, Vaccino v) {
  // scorro tutti i cani con numero di chip diverso da quello del cane vaccinato
  while (*pl && (*pl)->dato.chip != v.chip)
    pl = &(*pl)->next;
  // se il cane non è già in lista creo l'elemento corrispondente
  if (*pl == NULL) {
    Cane c;
    c.chip = v.chip;
    // inizialmente i flag delle vaccinazioni sono tutti 0
    c.cimurro = 0;
    c.epatite = 0;
    c.parvovirosi = 0;
    insTesta(pl, c);
  }
  // imposto a 1 il flag per il vaccino appena effettuato
  switch (v.vaccino) {
    case 'C':
      (*pl)->dato.cimurro = 1;
      break;
    case 'E':
      (*pl)->dato.epatite = 1;
      break;
    case 'P':
      (*pl)->dato.parvovirosi = 1;
      break;
  }
}*/


void stampa(Lista l)
{
    while (l)
    {
        printf("%d ",l->dato.chip);
        if(l->dato.cinurro==0)
            printf("Cimurro ");
        if(l->dato.epatite==0)
            printf("Epatite ");
        if(l->dato.parvovirosi==0)
            printf("Parvovirosi ");
        //printf("%d Cinurro: %d Epatite: %d Parvovirosi: %d",l->dato.chip,l->dato.cinurro,l->dato.epatite,l->dato.parvovirosi);
        l=l->next;
        printf("\n");
    }
    printf("\n");
}