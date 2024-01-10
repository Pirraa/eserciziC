typedef struct 
{
    char url[100];
    int ora;
    int minuti;
}Record;

typedef struct{
    char url[100];
    int cnt;
    int oreUltimaVisita;
    int minutiUltimaVisita;
}Dato;

typedef struct nodo{
    Dato dato;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void aggiorna(Lista *l,Record r);
void inizializza(Lista *l);
void stampa(Lista l);
void insTesta(Lista *l,Dato d);
void ordina(Lista l, Lista* plOrd);
void aggiorna2(Lista *l,Record r);
void stampa2(Lista l);
