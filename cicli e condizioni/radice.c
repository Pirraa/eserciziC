#include<stdio.h>

int main()
{
    float a;
    float xn=1.0;
    printf("Inserisci radicando: \n");
    scanf("%f",&a);

    //ciclo for funzionante ma lo faccio un numero di volte casuali
    /*for(int j=0; j<5; j++)
        xn=((xn+a/xn))/2;
    printf("%f",xn);*/

    //ciclo infinito perchè per le cifre significative del float sono 5
    /*do{
       xn=((xn+a/xn))/2;
    }while(xn*xn!=a);*/

    //do while funzionante ma non è preciso, a causa dell'assegnamento a una variabile float diff
    /*float diff;
    do{
        xn=(xn+a/xn)/2;
        diff=xn*xn-a;
        if(diff<0)
            diff=-diff;
    }while(diff>1e-5);*/

    //do while funzionante ma non tiene conto del valore assoluto della differenza dei double
    /*do{
        xn=(xn+a/xn)/2.0;
    }while(xn*xn-a>1e-5);*/

    //definitivo, conto il valore assoluto dicendo che la differenza è compresa tra -10 alla -5 e 10 alla -5
    do{
        xn=(xn+a/xn)/2.0;
    }while(!(xn*xn-a>-1e-5 && xn*xn-a<1e-5));

    //funzioni per valore assoluto: fabs(-0.5) per i double e fabsf(-0-434) per i double entrambe  nella libreria math.h, compilando con gcc metti flag -lm 

    printf("%f",xn);
}