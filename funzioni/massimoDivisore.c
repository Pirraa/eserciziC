#include<stdio.h>

int mcd(int a,int b)
{
    if(a>b)
    {
        int t=b;
        b=a;
        a=t;
    }
    int m=1;

    for(int i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            if(b%i==0)
            {
                m=i;
            }
        }
    }
    return m;
}

int main()
{
    int array[10],m;

    do{
        printf("Inserisci M e ti dirò gli mcd tra i ed M con i compreso tra 1 e 10: ");
        scanf("%d",&m);
    }while(m<=0);

    for(int i=1; i<=10;i++)
    {
        array[i-1]=mcd(m,i);
        printf("MCD (%d, %d) = %d \n",m,i,array[i-1]);
    }
}