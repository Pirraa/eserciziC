#include<stdio.h>
#define DIM 30

int main()
{
    int array[DIM],numero,dl=0;
    //stampa minimo, massimo, media, numeri più frequenti
    for(int i=0; i<DIM;i++)
    {
        scanf("%d",&numero);
        if(numero>=0)
        {
             array[i]=numero;
             dl++;
        }else{
            break;
        }
    }
       

    //massimo 
    int max=0;
    int j;
    for(j=1;j<dl;j++)
        if(array[j]>array[max])
            max=j;
    printf("Massimo: %d\n",array[max]);

    //minimo
    int min=array[0];
    for(int i=1;i<dl;i++)
        if(array[i]<min)
            min=array[i];
    printf("Minimo: %d\n",min);


    //media
    float media;
    int somma=0;
    for(int i=0;i<dl;i++)
         somma+=array[i];
    media=somma/DIM;
    printf("Media: %.2f\n",media);

    //frequenza
    int frequenze[dl],dlf,numeri[dl],i,k;
    for(int i=0; i<dl; i++)
    {
        for(k=0; k<dlf; k++)
        {
            if(array[i]==numeri[k])
            {
                frequenze[k]++;
                break;
            }
        }
        if(k==dlf)
        {
            numeri[k]=array[i];
            frequenze[k]=1;
            dlf++;
        }
    }

    int frequenza_max=frequenze[0];
    for(j=1;j<dlf-1;j++)
    {
        if(frequenze[j]>frequenza_max)
            frequenza_max=frequenze[j];
    }
    printf("Frequenza massima: %d\n",frequenza_max);

    for(j=0; j<dlf-1; j++)
    {
        if(frequenze[j]==frequenza_max)
            printf("Numero: %d\n",numeri[j]);
    }
}