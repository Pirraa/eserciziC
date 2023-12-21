typedef struct{
    char parola[31];
    int contatore;
}Dato;

typedef struct nodo{
    Dato dato;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void nuovaLista(Lista *pl);
void aggiornaLista(Lista *pl,char *parola);
void insTesta(Lista *l,Dato d);
void stampa(Lista l);