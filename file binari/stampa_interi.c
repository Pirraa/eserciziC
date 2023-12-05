#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *pf;
    int vet[10]={1,2,3,4,5,6,7,8,9,10};
    pf=fopen("numeri.dat","wb"); //write e binary
    if(pf==NULL)
        exit(1);
    fwrite(vet,sizeof(int),10,pf); //vet è l'indirizzo da cui partire a scrivere in memoria
    //fwrite(vet,10*sizeof(int),1,pf);
    fclose(pf);
}