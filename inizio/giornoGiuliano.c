#include<stdio.h>

int main()
{
    int g,m,a,jd,n0,n1,n2,n3;
    printf("Inserisci il giorno ");
    scanf("%d",&g);
    printf("Inserisci il mese in cifra ");
    scanf("%d",&m);
    printf("Inserisci l'anno ");
    scanf("%d",&a);
    n0=(m-14)/12;
    n1=(1461*(a+4800+n0))/4;
    n2=(367*(m-2-12*n0))/12;
    n3=3*(a+4900+n0)/400;
    jd=n1+n2-n3+g-32075;
    printf("Il giorno giuliano è %d",jd);
}