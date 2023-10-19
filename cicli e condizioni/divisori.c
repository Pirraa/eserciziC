#include<stdio.h>

int main()
{
    int n,i=0;
    printf("Inserisci il numero di cui calcolare i divisori: ");
    scanf("%d",&n);
    
    while(i<=n)
    {
        i++;
        if(n%i==0)
            printf("%d è un divisore di %d \n",i,n);
    }
    return 0;
}