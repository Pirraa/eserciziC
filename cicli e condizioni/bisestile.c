#include<stdio.h>

int main()
{
    int anno;
    printf("Inserisci un anno e ti dirò se è bisestile: ");
    scanf("%d",&anno);
    if((anno%4==0 && anno%100!=0)||anno%400==0)
        printf("L'anno %d è bisestile \n",anno);
    else
        printf("L'anno %d non è bisestile \n",anno);
}