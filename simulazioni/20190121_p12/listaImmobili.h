typedef struct{
    char indirizzo[30];
    int n_vani;
    float distanza;
}Record;

typedef struct nodo{
    Record r;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void inizializza(Lista *pl);
void insTesta(Lista *pl, Record r);
void insOrd(Lista *pl,Record r);
void insOrd2(Lista *pl,Record r);
void stampa(Lista l);
Lista* ricerca(Lista* pl, Record r);
