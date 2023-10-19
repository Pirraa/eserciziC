#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g1,m1,a1,g2,m2,a2,jd1,jd2,n0,n1,n2,n3;
    printf("Inserisci la prima data giorno mese anno (esempio 3 10 2023) \n");
    scanf("%d",&g1);
    scanf("%d",&m1);
    scanf("%d",&a1);

    n0=(m1-14)/12;
    n1=(1461*(a1+4800+n0))/4;
    n2=(367*(m1-2-12*n0))/12;
    n3=3*(a1+4900+n0)/400;
    jd1=n1+n2-n3+g1-32075;

    printf("Il giorno giuliano della prima data è %d \n",jd1);

    
    printf("Inserisci la seconda data giorno mese anno (esempio 5 10 2023) \n");
    scanf("%d",&g2);
    scanf("%d",&m2);
    scanf("%d",&a2);

    n0=(m2-14)/12;
    n1=(1461*(a2+4800+n0))/4;
    n2=(367*(m2-2-12*n0))/12;
    n3=3*(a2+4900+n0)/400;
    jd2=n1+n2-n3+g2-32075;

    printf("Il giorno giuliano della prima data è %d \n",jd2);

    printf("La differeza tra le due date è %d \n",abs(jd1-jd2));
}