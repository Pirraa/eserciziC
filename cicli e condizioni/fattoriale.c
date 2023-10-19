#include<stdio.h>

int main()
{
    int n=0;
    printf("Inserisci il numero: ");
    scanf("%d",&n);

    for (int i = n-1; i > 0; i--)
    {
        n=n*i;
    }
    printf("Fattoriale: %d \n",n);

    printf("Inserisci il numero: ");
    scanf("%d",&n);
    int acc=1;
    for(int i=1; i<n; i++){
        acc=acc*i;
    }
    printf("Fattoriale: %d \n",acc);
    
}