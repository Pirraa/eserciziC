#include<stdio.h>

//PASSAGGIO DI PARAMETRI DI OUTPUT PER RIFERIMENTO
int divisione(int dividendo, int divisore, int*p_quoziente, int*p_resto)
{
    if(divisore==0)
        return 0;
    *p_quoziente=dividendo/divisore;
    *p_resto=dividendo%divisore;
    return 1;
}

int main(void)
{
    int dividendo, divisore,quoziente,resto;
    printf("Inserisci dividendo e divisore: ");
    scanf("%d %d",&dividendo,&divisore);
    if(divisione(dividendo,divisore,&quoziente,&resto)==1)
        printf("Quoziente: %d\nResto: %d \n",quoziente,resto);
    return 0;
}