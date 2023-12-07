#include"parolaSegreta.h"
typedef struct{
    int nvite;
    ParolaSegreta parolaSegreta;
}Gioco;
void inizializza_gioco(Gioco *pg,int v);
void aggiorna_gioco(Gioco *pg, char c);
int finito(Gioco *pg);
int vincente(Gioco *pg);
void stampaGioco(Gioco *pg);
void stampa_parola_segreta(Gioco *pg);