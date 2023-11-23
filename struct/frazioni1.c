#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int num;
    int den;
} Frazione;

int mcd(int a,int b)
{
    //algoritmo di euclide
    while(a!=b)
    {
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

Frazione frazione(int n, int d){
    Frazione fr;
    if(d==0){
        printf("Errore denominatore nullo!\n");
        exit(1);
    }
    int m=mcd(n,d);
    fr.num=n/m;
    fr.den=d/m;
    return fr;
}

int num(Frazione fr)
{
    return fr.num;
}

int den(Frazione fr)
{
    return fr.den;
}

void stampaFrazione(Frazione f)
{
    printf("%d/%d \n",num(f),den(f));
}

void stampaDecimale(Frazione f)
{
    float r = (float)num(f)/(float)den(f);
    printf("%f \n",r);
}

Frazione leggiFrazione(void)
{
    int n,d,m;
    printf("Inserisci numeratore: ");
    scanf("%d",&n);
    printf("Inserisci denominatore: ");
    scanf("%d",&d);
    Frazione f;
    f=frazione(n,d);
    return f;
}

int main()
{
    Frazione f1;
    Frazione f2;
    f1=frazione(4,6);
    f2=frazione(3,4);
    stampaFrazione(f1);
    stampaDecimale(f2);
    Frazione f3=leggiFrazione();
    stampaFrazione(f3);
    stampaDecimale(f3);
    return 0;
}