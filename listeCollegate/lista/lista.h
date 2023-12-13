typedef int Dato;

typedef struct nodo{
    Dato dato;
    struct nodo* next;
}Nodo;

typedef Nodo *Lista;

void listaNonOrdinata(Lista* pl, int n);
void stampa(Lista l);
void azzera(Lista l);
int somma(Lista l);
int lunghezza(Lista l);
int testa(Lista l);
Lista coda(Lista l);
int massimo(Lista l);


