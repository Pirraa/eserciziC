#include<stdio.h>

int main()
{
    int dividendo,divisore,a,cnt=0;

    printf("Inserisci dividendo e divisore: ");
    scanf("%d %d",&dividendo,&divisore);
    a=dividendo;

    do{
        if(a>=divisore)
        {
            a=a-divisore;
            cnt++;
        }
    }while(a>=divisore);

    printf("Resto: %d Quoziente: %d \n",a,cnt);
}