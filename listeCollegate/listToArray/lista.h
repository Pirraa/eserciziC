typedef int Dato;
typedef struct nodo{
    Dato dato;
    struct nodo* next;
}Nodo;
typedef Nodo* Lista;
void listaNonOrdinata(Lista* pl, int n);
void stampa(Lista l);
void listaNonOrdinata(Lista* pl, int n);
int lunghezza(Lista l);
int* listaToArray(Lista l,int *dim);
int* listToArray(Lista l);
void stampa(Lista l);