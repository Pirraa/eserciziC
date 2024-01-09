#include<stdio.h>
#include<stdlib.h>
#include"listaImmobili.h"

/*Lista* ricerca(Lista* pl, Record r) 
{
  while (*pl) {
    if ((*pl)->r.distanza > r.distanza)
      break;
    pl = &(*pl)->next;
  }
  return pl;
}

void insOrd(Lista* pl, Record r) 
{
  pl = ricerca(pl, r);
  insTesta(pl, r);
}*/

void insOrd(Lista *pl, Record r) {
  while (*pl) {
    if ((*pl)->r.distanza < r.distanza)
      pl = &(*pl)->next;
    else
      break;
  }
  insTesta(pl, r);
}

void insOrd2(Lista *pl,Record r)
{
    while (*pl) {
        /*if ((*pl)->r.n_vani > r.n_vani)
            pl = &(*pl)->next;
        else if((*pl)->r.n_vani == r.n_vani)
            if((*pl)->r.distanza < r.distanza)
                pl = &(*pl)->next;
            else
                break;
        else
            break;*/
        if ((*pl)->r.n_vani > r.n_vani || (*pl)->r.n_vani == r.n_vani && (*pl)->r.distanza < r.distanza)
            pl = &(*pl)->next;
        else    
            break;
  }
  insTesta(pl, r);
}

void inizializza(Lista *pl)
{
    *pl=NULL;
}

void insTesta(Lista *pl, Record r)
{
    Nodo *aux=(Nodo*)malloc(sizeof(Nodo));
    aux->r=r;
    aux->next=*pl;
    *pl=aux;
}

void stampa(Lista l)
{
    while(l)
    {
        printf("INDIRIZZO: %s VANI: %d DISTANZA: %f \n",l->r.indirizzo,l->r.n_vani,l->r.distanza);
        l=l->next;
    }
}


