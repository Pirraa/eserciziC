#include"listaUtenti.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void inizializza_lista(Lista *pl)
{
  *pl=NULL;
}

void insTesta(Lista* pl, Dato d)
{
    Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
    if (aux == NULL) exit(100); // allocazione non riuscita
        aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void inizializza_utente(Lista* pl,char *str)
{
    Dato d;
    strcpy(d.codice,str);
    d.cnt1=4;
    d.cnt2=4;
    d.cnt3=4;
    d.cntNegati=0;
    d.tessera_valida=1;
    insTesta(pl,d);
}

void aggiornalista(Lista *pl, char*str,int attività)
{
  while(*pl!=NULL)
  {
    if(strcmp(str,(*pl)->dato.codice)==0 && (*pl)->dato.cntNegati<3)
    {
        if(attività==1) 
            if((*pl)->dato.cnt1>0)
                (*pl)->dato.cnt1--;
            else
            {
                printf("Codice Fiscale %s, attività %d: Accesso negato\n",(*pl)->dato.codice,attività);
                (*pl)->dato.cntNegati++;
                if((*pl)->dato.cntNegati==3)
                    (*pl)->dato.tessera_valida=0;
            }
        if(attività==2) 
            if((*pl)->dato.cnt2>0)
                (*pl)->dato.cnt2--;
            else
            {
                printf("Codice Fiscale %s, attività %d: Accesso negato\n",(*pl)->dato.codice,attività);
                (*pl)->dato.cntNegati++;
                if((*pl)->dato.cntNegati==3)
                    (*pl)->dato.tessera_valida=0;
            }
        if(attività==3) 
            if((*pl)->dato.cnt3>0)
                (*pl)->dato.cnt3--;
            else
            {
                printf("Codice Fiscale %s, attività %d: Accesso negato\n",(*pl)->dato.codice,attività);
                (*pl)->dato.cntNegati++;
                if((*pl)->dato.cntNegati==3)
                    (*pl)->dato.tessera_valida=0;
            }
        break;
    }
    pl=&(*pl)->next;
  }
}

/*metodo del prof con vettore al posto di usare 3 contatori
int aggiorna(Lista* pl, CodiceFiscale c, int attivita) {
  // aggiorna lo stato della tessera
  // restituisce 1 per ingresso consentito, 0 per ingresso negato

  // salto tutti i codici fiscali diversi
  while (*pl && strcmp((*pl)->dato.cf, c) != 0)
    pl = &(*pl)->next;
    // se non ho terminato la lista
  if (*pl) {
    // se la tessera non è stata annullata e ci sono ancora ingressi per l'attività
    if ((*pl)->dato.tesseraValida && (*pl)->dato.ingressi[attivita - 1] > 0) {
      // decremento gli ingressi per l'attività
      (*pl)->dato.ingressi[attivita - 1]--;
      // resetto il contatore degli ingressi negati
      (*pl)->dato.ingressiNegatiCons = 0;
      // dico al chiamante che l'ingresso è consentito
      return 1;
    } else {
      // altrimenti incremento il contatore degli ingressi negati
      (*pl)->dato.ingressiNegatiCons++;
      // se sono almeno tre annullo la tessera
      if ((*pl)->dato.ingressiNegatiCons >= 3)
        (*pl)->dato.tesseraValida = 0;
        // dico al chiamante che l'ingresso è negato
      return 0;
    }
  } else {
    printf("Codice fiscale %s non trovato\n");
    return 0;
  }
}*/

void stampa(Lista l) 
{
  while (l) {
    printf("%s %d %d %d ", l->dato.codice,l->dato.cnt1,l->dato.cnt2,l->dato.cnt3);
    if(!(l->dato.tessera_valida))
        printf("Tessera invalida");
    l = l->next;
    printf("\n");
  }
}