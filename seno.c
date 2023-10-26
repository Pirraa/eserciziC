#include<stdio.h>


double calcolaPotenza(float baseNumero, int esponente) {
    double risultato = 1.0;

    if (esponente < 0) {
        baseNumero = 1.0 / baseNumero;
        esponente = -esponente;
    }

    for (int i = 0; i < esponente; i++) {
        risultato *= baseNumero;
    }

    return risultato;
}

double fattoriale(int n)
{
    int acc=1;
    for(int i=1; i<n; i++){
        acc=acc*i;
    }
    return acc;
}

int main()
{
    double a;
    double xn;
    printf("Inserisci l'angolo di cui trovare il seno in radianti: ");
    scanf("%lf",&a);
    xn=a;
    for(int n=0; n<10; n++)
    {
        int uno=-1; //questo lo devo elevare alla n
        if(n%2==0)
            uno=1;
        else
            uno=-1;

        double k;//equivale ad a elevata alla 2n+1
        k=calcolaPotenza(a,2*n+1);

        double fatt; //calcolare il fattoriale di 2n+1
        fatt=fattoriale(2*n+1);

        xn=uno*k/fatt;
    }
    printf("%lf \n",xn);
}

