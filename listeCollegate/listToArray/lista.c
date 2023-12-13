#include"lista.h"
#include<stdlib.h>
#include<stdio.h>
// fa puntare pl a una lista non ordinata di n elementi (n <= 10)
void listaNonOrdinata(Lista* pl, int n) {
  // gli elementi da inserire nella lista
  int a[] = {6, 2, 3, 2, 4, 7, 0, 2, 5, 1};
  int i;
  // per i che va da 0 a n - 1
  for (i = 0; i < n; i++) {
    // *pl punta a un nuovo nodo
    (*pl) = (Nodo*)malloc(sizeof(Nodo));
    // il cui dato è a[i]
    (*pl)->dato = a[i];
    // e il cui campo next è NULL (cioè *pl ha un solo elemento; eventualmente
    // ne saranno aggiunti altri nelle iterazioni successive)
    (*pl)->next = NULL;
    // assegna a pl l'indirizzo della sua coda
    pl = &(*pl)->next;
  }
}

/*int* listaToArray(Lista l,int *dim)
{
    int *punt;
    int lun;
    int i=0;
    lun=lunghezza(l);
    punt=(int*)malloc(sizeof(int)*lun);
    while(l!=NULL)
    {
        punt[i]=l->dato;
        l=l->next;
        i++;
    }
    *dim=lun;
    return punt;
}*/

int* listaToArray(Lista l,int *dim)
{
    int *punt;
    int lun;
    lun=lunghezza(l);
    punt=(int*)malloc(sizeof(int)*lun);
    for(int i=0; i<lun; i++)
    {
        punt[i]=l->dato;
        l=l->next;
    }
    *dim=lun;
    return punt;
}

int lunghezza(Lista l)
{
    int lun=0;
    while(l!=NULL)
    {
        lun++;
        l=l->next;
    }
    return lun;
}

void stampa(Lista l)
{
    //Foreach(printf,l)
    while(l!=NULL)
    {
        printf("%d ",l->dato);
        l=l->next;
    }
    printf("\n");
}