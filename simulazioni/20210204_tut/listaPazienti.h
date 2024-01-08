typedef struct{
    char codice_fiscale[17];
    int ora;
    float temp;
    float saturazione;
}Rilevazione;

typedef struct{
    char codice_fiscale[17];
    int num_rilevazioni;
    float somma_temp;
    float somma_sat;
}Dato;

typedef struct nodo{
    Dato dato;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void inizializza(Lista *l);
void insTesta(Lista *l,Dato d);
void aggiornaPaziente(Lista *l,Rilevazione r);
void aggiornaPazienti(Lista *l,Rilevazione r);
void stampa(Lista l);