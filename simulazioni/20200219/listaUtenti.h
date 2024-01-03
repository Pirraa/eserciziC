typedef struct 
{
    char telefono[11];
    char tariffa;
    float credito;
}Record;

typedef struct nodo{
    Record dato;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void inizializzaLista(Lista *l);
void inserisciUtenti(Lista *l,Record r);
void aggiornaLista(Lista *l,char *telefono,int minuti);
void stampa(Lista l);