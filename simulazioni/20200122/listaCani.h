typedef struct 
{
    int chip;
    char vaccino;
}Record;

typedef struct{
    int chip;
    int cinurro;
    int epatite;
    int parvovirosi;
}Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void inizializzaLista(Lista *pl);
void inserimentoTesta(Lista *pl,Dato d);
void aggiorna(Lista *pl,Record r);
void stampa(Lista l);

