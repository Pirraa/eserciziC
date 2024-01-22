#include<stdio.h>
#include<stdlib.h>

typedef struct nodo{
    int dato;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;


void insTesta(Lista *pl,int d)
{
    Nodo *aux=(Nodo*)malloc(sizeof(Nodo));
    aux->dato=d;
    aux->next=*pl;
    *pl=aux;
}

void inizializza(Lista *pl)
{
    insTesta(pl,3);
    insTesta(pl,7);
    insTesta(pl,2);
    insTesta(pl,3);
    insTesta(pl,2);
}

int main()
{
    int i,a[10]={0,0,0,0,0,0,0,0,0,0};
    Lista l;
    inizializza(&l);
    do{
        for(;l&&l->dato;l=l->next)
            a[l->dato]=l->dato;
    }while(0);
    for(i=0;i<10;i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}