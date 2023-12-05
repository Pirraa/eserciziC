#include<stdio.h>
#include<stdlib.h>
#define DIM 100 
int main()
{
    FILE *pf;
    int numero=0;
    int somma=0;
    pf=fopen("numeri.dat","rb");
    if(pf==NULL)
        exit(1);
    while(fread(&numero,sizeof(int),1,pf)==1)
    {
        printf("%d ",numero);
        somma+=numero;
    }
    printf("somma:%d \n",somma);  
    fclose(pf);
    return 0;
}