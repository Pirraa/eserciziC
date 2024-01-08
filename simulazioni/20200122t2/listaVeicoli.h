typedef struct 
{
    char targa[8];
    float durata;
}Record;

typedef struct {
    char targa[8];
    int cnt;
}Veicolo;

typedef struct nodo{
    Veicolo veicolo;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void inizializza(Lista *l);
void insTesta(Lista *l,Veicolo v);
void aggiorna(Lista *l,Record r);
void stampa(Lista l);
