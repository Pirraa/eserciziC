#include<stdio.h>
#include<stdlib.h>
#define DIM 100 
int main()
{
    FILE *pf;
    int a[DIM];
    int dl;
    pf=fopen("numeri.dat","rb");
    if(pf==NULL)
        exit(1);
    //legge un massimo di dim interi dal file mettendoli in a, il numero di elementi letti è dl
    dl=fread(a,sizeof(int),DIM,pf);
    fclose(pf);
    for(int i=0; i<dl; i++)
        printf("%d ",a[i]);
    return 0;
}