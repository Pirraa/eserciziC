#include<stdio.h>

int main()
{
    int anno,mese,bisestile;
    printf("Inserisci un anno: ");
    scanf("%d",&anno);
    printf("Inserisci un mese: ");
    scanf("%d",&mese);
    if((anno%4==0 && anno%100!=0)||anno%400==0)
        bisestile=1;
    else
        bisestile=0;
    
    if(mese==1 || mese==3 || mese==5 || mese==7 || mese==8 || mese==10 || mese==12)
        printf("Il mese ha 31 giormi \n");
    else if(mese==11 || mese==4 || mese==6 || mese==9)
        printf("Il mese ha 30 giormi \n");
    else if(mese==2 && bisestile==1)
        printf("Il mese ha 29 giormi \n");
    else if(mese==2 && bisestile==0)
        printf("Il mese ha 28 giorni \n");
    else
        printf("Mese inesistente \n");
    
    /*switch(mese)
    {
        case 1:
        case 2:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Il mese ha 31 giormi");
        break;
        case 2:
            if(bisestile==1)
                printf("Il mese ha 29 giorni");
            else
                printf("Il mese ha 28 giorni");
        break;
        case 11:
        case 4:
        case 6:
        case 9:
            printf("Il mese ha 30 giormi");
        break;
    }*/
}