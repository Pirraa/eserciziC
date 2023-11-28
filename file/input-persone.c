#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[30];
    char cognome[30];
    char sesso;
    int nascita;
}Persona;

int main()
{
    Persona persone[100];
    FILE *pf;
    char carattere[2];
    int dl=0;
    pf=fopen("people.txt","rt");
    if(pf==NULL)
    {
        printf("Errore di apertura\n");
        exit(1);
    }

    //scanf se dico di leggere un char(sesso) legge il carattere successivo all'ultima lettera del cognome che sarà uno spazio, e può essercene più di uno
    //fscanf quando deve leggere una stringa scarta i caratteri bianchi precedenti
    while(fscanf(pf,"%s%s%s%d",
    persone[dl].cognome,persone[dl].nome,
    carattere,&persone[dl].nascita)==4)
    {
        persone[dl].sesso=carattere[dl];
        dl++;
    }
   
    fclose(pf);
}