#include<stdio.h>
#include<string.h>
#define DIM 10

typedef struct {
    char nome[30];
    char cognome[30];
    char numero[9];
} contatto;

void stampaC(contatto c)
{
    printf("Nome: %s Cognome: %s Numero: %s\n",c.nome,c.cognome,c.numero);
}

void stampa(contatto rubrica[DIM],int dl)
{
    for(int i=0; i<dl; i++)
        stampaC(rubrica[i]);
}

void inserisci(contatto rubrica[DIM],int *dl)
{
    printf("inserisci nome\n");
    scanf("%s",rubrica[*dl].nome);
    printf("inserisci cognome\n");
    scanf("%s",rubrica[*dl].cognome);
    printf("inserisci numero\n");
    scanf("%s",rubrica[*dl].numero);
    (*dl)++;
}

int cerca(contatto rubrica[DIM],int dl)
{
    char cell[9];
    printf("inserisci numero\n");
    scanf("%s",cell);
    for(int i=0; i<dl; i++)
        if(strcmp(rubrica[i].numero,cell)==0)
            return 1;
    return 0;
}

int main()
{
    contatto rubrica[DIM];
    int dl=0;
    char scelta;
    while(scelta!='q')
    {
        printf("\nCosa vuoi fare? (q per uscire) \n");
        printf("a. Stampa rubrica\n");
        printf("b. inserisci contatto \n");
        printf("c. cerca un contatto \n");
        printf("Scelta: ");
        scanf(" %c",&scelta);
        switch(scelta)
        {
            case 'a':
                stampa(rubrica,dl);
                break;
            case 'b':
                if(dl<10)
                    inserisci(rubrica,&dl);
                break;
            case 'c':
                if(cerca(rubrica,dl)==1)
                    printf("trovato!\n");
                else
                    printf("non trovato\n");
                break;
            default:
                printf("scelta errata\n");
                break;
        }
    }
}