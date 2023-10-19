#include<stdio.h>

int main()
{
    int g=0,m=0,a=0,b=0;
    printf("Inserisci una data G/M/AAAA \n");

    //controllo mese nel range, giorno massimo 30 31 o 29 per i vari mesi (manca controllo giorno 29 febbraio in anno non bisestile)
    do{
        scanf("%d %d %d",&g,&m,&a);
    }while((m==2 && g>29) || ((m==11 || m==4 || m==6 || m==9) && g> 30) || (g>31 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10)) || (m>12 || m<1));
        

    //controllo bisestilità
    if((a%4==0 && a%100!=0)||a%400==0)
        b=1;
    else
        b=0;

    //controllo da febbraio a marzo, bisestile il 29, non bisestile il 30 
    if((b==1 && m==2 && g==29) || (b==0 && m==2 && g==28))
    {
        g=1;
        m=3;
    }
    //controllo anno bisestile 29 febbraio
    else if(b==1 && m==2 && g==28)
    {
        g=29;
    }
    //controllo mese successsivo
    else if((g==30 && (m==11 || m==4 || m==6 || m==9)) || (g==31 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10)))
    {
        g=1;
        m+=1;
    }
    //controllo anno successivo
    else if(g==31 && m==12)
    {
        g=1;
        m=1;
        a+=1;
    }
    //giorno intermedio
    else
    {
        //printf("Caso non previsto \n");
        g+=1;
    }
    printf("Data con aggiunta di un giorno: %d %d %d \n",g,m,a);
}