#include<stdio.h>

int main()
{
    int g1,m1,a1,jd,n0,n1,n2,n3,giorno;
    printf("Inserisci la prima data giorno mese anno (esempio 3 10 2023) \n");
    scanf("%d",&g1);
    scanf("%d",&m1);
    scanf("%d",&a1);
    n0=(m1-14)/12;
    n1=(1461*(a1+4800+n0))/4;
    n2=(367*(m1-2-12*n0))/12;
    n3=3*(a1+4900+n0)/400;
    jd=n1+n2-n3+g1-32075;
    giorno=jd%7;//IL RESTO VA DA 0 A 6
    switch(giorno)
    {
        case 0:
            printf("Il giorno della settimana è il numero %d lunedì \n",giorno+1);
        break;
        case 1:
            printf("Il giorno della settimana è il numero %d martedì \n",giorno+1);
        break;
        case 2:
            printf("Il giorno della settimana è il numero %d mercoledì \n",giorno+1);
        break;
        case 3:
            printf("Il giorno della settimana è il numero %d giovedì \n",giorno+1);
        break;
        case 4:
            printf("Il giorno della settimana è il numero %d venerdì \n",giorno+1);
        break;
        case 5:
            printf("Il giorno della settimana è il numero %d sabato \n",giorno+1);
        break;
        case 6:
            printf("Il giorno della settimana è il numero %d domenica \n",giorno+1);
        break;
    }
}