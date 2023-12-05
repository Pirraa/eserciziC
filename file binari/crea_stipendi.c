#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    char nome[20];
    float stipendio;
}Record;


int main()
{
    FILE *pf;
    Record dipendenti[3]={{"Rossi",800},{"Bianchi",1100.0},{"Verdi",900.0}};
    pf=fopen("stipendi.dat","wb");
    if(pf==NULL)
    {
        printf("errore apertura!\n");
        exit(1);
    }
    fwrite(dipendenti,sizeof(Record),3,pf);
    fclose(pf);
    return 0;
}