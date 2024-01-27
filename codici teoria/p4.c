#include<stdio.h>
typedef struct {
    char nome[30];
    char cognome[30];
    int età;
}Persona;

Persona leggi(Persona p)
{
    scanf("%s",p.nome);
    scanf("%s",p.cognome);
    scanf("%d",&p.età);
    return p;
}

void assegna(Persona *p)
{
    p[0].età=4;
}

int main()
{
    Persona p;
    p=leggi(p);//passaggio per valore
    Persona pp[10];
    assegna(pp);//passaggio per riferimento
    Persona *p3;
    p3->età=4;//accesso tramite freccia perchè puntatore a struct
}