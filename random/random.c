#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n;

    n=rand()%10; //numero casuale fra 0 e 9, perchè restituisce l'ultima cifra del numero data dal modulo del numero per 10
    printf("Numero casuale fra 1 e 10: %d\n",n);

    int min=3,max=100;
    //il modulo della divisione fra un numero e il massimo restituisce un numero fra 0 e max-1, quindi aggiungi 1 per ottenere un numero fra 1 e max
    n=min+rand()%(max-min+1);//numero casuale fra minimo e massimo
    printf("Numero casuale fra 3 e 100: %d\n",n);

    //con i double
    //ottengo numero fra 0 e 0.1
    double d;
    d=(double)rand()/RAND_MAX;
    printf("double casuale fra 0 e 0.1: %f\n",d);
    //ottengo numero fra 0 e max ma di tipo double
    d=min+(double)rand()/RAND_MAX*(max-min);
    printf("double casuale fra 3 e 100: %f\n",d);

    //i numeri casuali generati sono sempre gli stessi perchè partono dal seme (seed)
    srand(100);//cambio il seme per cambiare i numeri generati
    srand(time(NULL));//genero un seme casuale, co i secondi trascorsi dal 1/1/1970 ad oggi
    printf("sequenza di 10 numeri casuali: \n");
    for(int i=0; i<10; i++)
    {
        printf("%d ",1+rand()%6);
    }
    printf("\n");
    return 0;
}