#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    char nominativo[20];
    float remunerazione;
}Impiegato;


int main()
{
    FILE *pf;
    Impiegato i;
    pf=fopen("stipendi.dat","r+b");
    if(pf==NULL)
    {
        printf("errore apertura!\n");
        exit(1);
    }
    fseek(pf,0,SEEK_END);
    printf("dimensone file: %ld\n",ftell(pf));
    printf("numero record: %ld\n",ftell(pf)/sizeof(Impiegato));

    fclose(pf);
    return 0;
}