#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"listaVeicoli.h"

void inizializza(Lista *l)
{
    (*l)=NULL;
}
void insTesta(Lista *l,Veicolo v)
{
    Nodo* aux=(Nodo*)malloc(sizeof(Nodo*));
    aux->veicolo=v;
    aux->next=*l;
    *l=aux;
}
void aggiorna(Lista *l,Record r)
{
    while((*l)&&strcmp(r.targa,(*l)->veicolo.targa)!=0)
        l=&(*l)->next;
    if((*l)==NULL)
    {
        Veicolo v;
        v.cnt=0;
        strcpy(v.targa,r.targa);
        insTesta(l,v);
    }
    (*l)->veicolo.cnt++;
}
void stampa(Lista l)
{
    while(l)
    {
        if(l->veicolo.cnt<=5)
            printf("%s %.2f",l->veicolo.targa,l->veicolo.cnt*2.00);
        else if(l->veicolo.cnt<=10 && l->veicolo.cnt>=6)
            printf("%s %.2f",l->veicolo.targa,l->veicolo.cnt*1.90);
        else
            printf("%s %.2f",l->veicolo.targa,l->veicolo.cnt*1.80);
        l=l->next;
        printf("\n");
    }
}
