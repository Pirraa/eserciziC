#include<stdio.h>

int cubo(int n)
{
    /*int j,s=0,i=1;

    while(i<=n)
    {
        j=0;
        while(j<n)
        {
            s=s+n;
            j++;
        }
        i=i+1;
    }*/
    int s=0;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < n; j++)
            s=s+n;       
    return s;
}



int main()
{
    int n,s,array[100];

    do{
        printf("Inserisci n: ");
        scanf("%d",&n);
    }while(n>=100 || n<=0);

    for(int i=1; i<=n; i++)
    {
        array[i]=cubo(i);
        printf("%d ",array[i]);
    }

    
}