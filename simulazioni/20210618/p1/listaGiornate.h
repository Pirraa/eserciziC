typedef struct{
    int giorno;
    int mese;
    float ore;
    char attivita[30];
}Record;

typedef struct{
    int giorno;
    int mese;
    float totale;
}Dato;

typedef struct nodo{
    struct nodo* next;
    Dato dato;
}Nodo;

typedef Nodo* Lista;

void inizializza(Lista *l);
void aggiorna(Lista *l,Record r);
void stampa(Lista l);
void insTesta(Lista *l,Dato d);