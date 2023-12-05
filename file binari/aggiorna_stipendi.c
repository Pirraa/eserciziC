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
    while(fread(&i,sizeof(Impiegato),1,pf)==1){
        if(i.remunerazione<1000.0)
        {
            i.remunerazione=i.remunerazione*1.1;
            fseek(pf,-sizeof(Impiegato),SEEK_CUR);
            //posso usare anche la ftell che restituisce la posizione attuale a cui tolgo la dimensione di un record per tornare alla precedente
            //fseek(pf,ftell(pf)-sizeof(Impiegato),SEEK_CUR);
            fwrite(&i,sizeof(Impiegato),1,pf);
            fflush(pf);
        }   
    }
    fclose(pf);
    return 0;
}