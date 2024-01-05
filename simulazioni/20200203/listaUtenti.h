//usati dal prof
typedef char CodiceFiscale[17];
typedef struct {
  CodiceFiscale cf;
  int ingressi[3];  // ogni  elemento dell'array è il contatore degli ingressi
                    // per una attività;
                    // si potevano usare anche tre variabili,
                    // così si semplifica leggermente il codice di aggiornamento
  int ingressiNegatiCons, tesseraValida;  // campi usati nella parte 2
} Utente;


//usati da me
typedef struct{
    char codice[17];
    int cnt1;
    int cnt2;
    int cnt3;
    int cntNegati;
    int tessera_valida;
}Dato;

typedef struct nodo{
    Dato dato;
    struct nodo* next;
}Nodo;

typedef Nodo* Lista;

void inizializza_lista(Lista *pl);
void inizializza_utente(Lista* pl,char *str);
void stampa(Lista pl);
void aggiornalista(Lista *pl, char*str,int attività);
void insTesta(Lista* pl, Dato d);
