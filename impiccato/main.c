#include<stdio.h>
#include<stdlib.h>
#include"gioco.h"

int main(int argc, char*argv[])
{
    char lettura[2];
    Gioco gioco;
    int nvite;
    sscanf(argv[1],"%d",&nvite);
    inizializza_gioco(&gioco,nvite);
    while(!finito(&gioco))
    {
        printf("inserisci una lettera: ");
        scanf("%s",lettura);
        aggiorna_gioco(&gioco,lettura[0]);
        stampaGioco(&gioco);
    }
    if(vincente(&gioco))
        printf("hai vinto!\n");
    else
    {
        stampa_parola_segreta(&gioco);
        printf("hai perso!\n");
    }
      
    return 0;
}