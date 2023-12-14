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


void reverse(Lista l1, Lista *p2)
{
    *p2=NULL;
    while(l1)
    {
        insTesta(p2,l1->dato);
        l1=l1->next;
    }
}


void stampa(Lista l)
{
    while(l)
    {
        printf("%d ",l->dato);
        l=l->next;
    }
    printf("\n");
}

int main()
{
    Lista l1=NULL;
    Lista l2;
    insTesta(&l1,3);
    insTesta(&l1,2);
    insTesta(&l1,5);
    stampa(l1);
    reverse(l1,&l2);
    stampa(l2);
    return 0;
}