#include<stdio.h>
#include<stdlib.h>

typedef int Dato;
typedef struct nodo{
    Dato dato;
    struct nodo*next;
}Nodo;
typedef Nodo* Lista;

void insTesta(Lista *p1,Dato d)
{
    Nodo *aux=(Nodo*)malloc(sizeof(Nodo));
    aux->dato=d;
    aux->next=*p1;
    *p1=aux;
}

void nuovaLista(Lista* pl)
{
    *p1=NULL;
}

void insOrd(Lista *pl,Dato d)
{
    while(*pl)
    {
        if((*pl)->dato<d)
            pl=&(*pl)->next;
        else
            break;
    }
    insTesta(pl,d); 
}

int main()
{
    Lista l;
    nuovaLista(&l);
    insOrd(%l,5);
    insOrd(&l,2);
    insOrd(&l,3);
    stampa(l);
    return 0;
}