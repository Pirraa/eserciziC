#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    char cognome[20];
    float paga;
}Dipendente;


int main()
{
    FILE *pf;
    Dipendente dipendente;
    pf=fopen("stipendi.dat","rb");
    if(pf==NULL)
    {
        printf("errore apertura!\n");
        exit(1);
    }
    while(fread(&dipendente,sizeof(Dipendente),1,pf)==1)
        printf("%s %f\n",dipendente.cognome,dipendente.paga);
    fclose(pf);
    return 0;
}