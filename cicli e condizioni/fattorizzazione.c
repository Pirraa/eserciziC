#include<stdio.h>

int main()
{
    int n=0,divisore=2,nDiviso=0;

    printf("Inserire il numero di cui vuoi la fattorizzazione: \n");
    scanf("%d",&n);
    nDiviso=n;

    printf("Fattorizzazione: ");
    do
    {
        if(nDiviso%divisore==0)
        {
            nDiviso=nDiviso/divisore;
            printf("%d * ",divisore);
        }else
            divisore++;
    }while(nDiviso!=1);
    printf("%d \n", 1);
}