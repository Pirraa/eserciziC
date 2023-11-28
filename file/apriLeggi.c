#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *pf;
    char parola[20];
    int n_parole;
    int chiusura;
    pf=fopen("esempio.txt","rt");
    if(pf==NULL)
    {
        printf("Errore nell'apertura\n");
        exit(1);
    }
    n_parole=fscanf(pf,"%s",parola);
    if(n_parole!=0)
        printf("%s\n",parola);
    chiusura=fclose(pf);
    if(chiusura!=0){
        printf("Errore chiusura\n");
        exit(2);
    }
    return 0;
}