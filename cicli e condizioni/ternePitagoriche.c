#include<stdio.h>

int main()
{
    int n;
    printf("Inserisci l'ipotenusa: ");
    scanf("%d",&n);

    for(int a=1; a<n; a++)
        for(int i=1; i<n; i++){
            for(int j=1; j<n; j++)
            {
                if(i*i+j*j==a*a)
                    printf("Terna pitagorica: ipotenusa %d, cateti %d e %d \n",a,i,j);
            }
        }
}