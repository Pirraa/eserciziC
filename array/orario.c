#include<stdio.h>
#include<string.h>
#define RIGHE 5
#define COLONNE 4

typedef char stringa[11];

void inizializza(stringa o[RIGHE][COLONNE])
{
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            strcpy(o[i][j],"Vuoto");
        }
    }
}

void stampa(stringa o[RIGHE][COLONNE])
{
    char giorni[RIGHE][11] = {"Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì"};
    
    // Determina la lunghezza massima tra i nomi dei giorni
    int lunghezzaMassima = 0;
    for (int i = 0; i < RIGHE; i++) {
        int lunghezzaCorrente = strlen(giorni[i]);
        if (lunghezzaCorrente > lunghezzaMassima) {
            lunghezzaMassima = lunghezzaCorrente;
        }
    }

    printf("GIORNO\t\t");
    for (int i = 1; i <= COLONNE; i++) {
        printf("SLOT %d\t\t", i);
    }
    printf("\n");

    for (int i = 0; i < RIGHE; i++) {
        printf("%-*s\t", lunghezzaMassima, giorni[i]);
        for (int j = 0; j < COLONNE; j++) {
            printf("%s\t\t",o[i][j]);
        }
        printf("\n");
    }
}

void stampaNonVa(stringa o[RIGHE][COLONNE]) 
{
    char giorni[RIGHE][11] = {"Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì"};

    // Determina la lunghezza massima tra le materie per ogni colonna
    int lunghezzaMassimaPerColonna[COLONNE] = {0};

    for (int j = 0; j < COLONNE; j++) {
        for (int i = 0; i < RIGHE; i++) {
            int lunghezzaCorrente = strlen(o[i][j]);
            if (lunghezzaCorrente > lunghezzaMassimaPerColonna[j]) {
                lunghezzaMassimaPerColonna[j] = lunghezzaCorrente;
            }
        }
    }

    printf("GIORNO\t\t");
    for (int i = 1; i <= COLONNE; i++) {
        printf("SLOT %d\t\t", i);
    }
    printf("\n");

    for (int i = 0; i < RIGHE; i++) {
        printf("%-*s\t", 11, giorni[i]); // Usiamo la lunghezza massima del giorno
        for (int j = 0; j < COLONNE; j++) {
            printf("%-*s\t\t", lunghezzaMassimaPerColonna[j], o[i][j]);
        }
        printf("\n");
    }
}

void stampaG(stringa o[RIGHE][COLONNE])
{
    stringa s;
    //stringa giorni[5] = {"Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì"};
    printf("Di che giorno vuoi l'orario?: ");
    scanf("%s",s);
    for (int i = 1; i <= COLONNE; i++) {
        printf("SLOT %d\t", i);
    }
    printf("\n");
    if(strcmp(s,"Lunedì")==0)
        for(int j=0; j<COLONNE; j++)
            printf("%s\t",o[0][j]);
    if(strcmp(s,"Martedì")==0)
        for(int j=0; j<COLONNE; j++)
            printf("%s\t",o[1][j]);
    if(strcmp(s,"Mercoledì")==0)
        for(int j=0; j<COLONNE; j++)
            printf("%s\t",o[2][j]);
    if(strcmp(s,"Giovedì")==0)
        for(int j=0; j<COLONNE; j++)
            printf("%s\t",o[3][j]);
    if(strcmp(s,"Venerdì")==0)
        for(int j=0; j<COLONNE; j++)
            printf("%s\t",o[4][j]);
    printf("\n");
}

void inserisci(stringa o[RIGHE][COLONNE])
{
    stringa s,materia;
    int slot;
    printf("Di che giorno vuoi l'orario?: ");
    scanf("%s",s);
    printf("In che slot: da 1 a 4: ");
    scanf("%d",&slot);
    printf("Che materia?: ");
    scanf("%s",materia);
    if(strcmp(s,"Lunedì")==0)
        strcpy(o[0][slot-1],materia);
    if(strcmp(s,"Martedì")==0)
        strcpy(o[1][slot-1],materia);
    if(strcmp(s,"Mercoledì")==0)
        strcpy(o[2][slot-1],materia);
    if(strcmp(s,"Giovedì")==0)
        strcpy(o[3][slot-1],materia);
    if(strcmp(s,"Venerdì")==0)
        strcpy(o[4][slot-1],materia);
}

int main()
{
    stringa orario[RIGHE][COLONNE];
    inizializza(orario);
    char scelta;
    while(scelta!='q')
    {
        printf("a. stampa orario: \n");
        printf("b. stampa giorno: \n");
        printf("c. inserisci orario: \n");
        scanf(" %c",&scelta);
        switch(scelta)
        {
            case 'a':
                stampa(orario);
                break;
            case 'b':
                stampaG(orario);
                break;
            case 'c':
                inserisci(orario);
                break;
            default:
                printf("opzione non valida");
                break;
        }
    }
    return 0;
}