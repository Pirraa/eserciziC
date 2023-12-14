#include<stdlib.h>
#include<stdio.h>
typedef int Dato;
typedef struct nodo{
    Dato dato;
    struct nodo* next;
}Nodo;
typedef Nodo *Lista;

void stampa(Lista l)
{
    while(l)
    {
        printf("%d ",l->dato);
        l=l->next;
    }
    printf("\n");
}

void insTesta(Lista *pl,Dato dato)
{
    Nodo *aux;
    aux=(Nodo*)malloc(sizeof(Nodo));
    if(aux==NULL)
        exit(1);
    aux->dato=dato;
    aux->next=*pl;
    *pl=aux;
}

void elimTesta(Lista *pl)
{
    Nodo*aux = *pl;
    pl=(*pl)->next;
    free(aux);
}

int main()
{
    Lista l=NULL;
    insTesta(&l,3);
    insTesta(&l,5);
    insTesta(&l,2);
    stampa(l);
    elimTesta(&l);
    stampa(l);
    return 0;
}