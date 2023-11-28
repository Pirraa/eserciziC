#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *pf;
    char parola[20];
    int chiusura;
    pf=fopen("esempio.txt","wt");
    if(pf==NULL)
    {
        printf("Errore nell'apertura\n");
        exit(1);
    }
    fprintf(pf,"ciao");
    chiusura=fclose(pf);
    if(chiusura!=0){
        printf("Errore chiusura\n");
        exit(2);
    }
    return 0;
}