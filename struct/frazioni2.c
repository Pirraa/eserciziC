//CON PASSAGGIO PER VALORE
#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int num;
    int den;
} Frazione;

int va(int n)
{
    return n<0?-n:n;
}

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
    int m=mcd(va(n),va(d));
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

Frazione oppposto(Frazione f)
{
    return frazione(-num(f),den(f));
}

Frazione inverso(Frazione f)
{
    return frazione(den(f),num(f));
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

Frazione somma(Frazione fr1, Frazione fr2)
{
    return frazione(num(fr1)*den(fr2)+den(fr1)*num(fr1),den(fr1)*den(fr2));
}

Frazione differenza(Frazione f1,Frazione f2)
{
    return frazione(num(f1)*den(f2)-den(f1)*num(f1),num(f1)*den(f2));
    //return somma(f1,opposto(f2));
}

Frazione prodotto(Frazione f1,Frazione f2)
{
    return frazione(num(f1)*num(f2),den(f1)*den(f2));
}

Frazione quoziente(Frazione f1,Frazione f2)
{
    //return frazione(num(f1)/num(f2),den(f1)/den(f2));
    return prodotto(f1,inverso(f2));
}

int main()
{
    char operazione;
    printf("Inserisci operazione: ");
    scanf("%c",&operazione);
    Frazione f1=leggiFrazione();
    Frazione f2=leggiFrazione();
    Frazione res;
    printf("Prima frazione: \n");
    stampaFrazione(f1);
    stampaDecimale(f1);
    printf("Seconda frazione: \n");
    stampaFrazione(f2);
    stampaDecimale(f2);

    switch(operazione)
    {
        case '+':
            res=somma(f1,f2);
            printf("Risultato: \n");
            stampaDecimale(res);
            stampaFrazione(res);
            break;
        case '-':
            res=differenza(f1,f2);
            printf("Risultato: \n");
            stampaDecimale(res);
            stampaFrazione(res);
            break;
        case '*':
            res=prodotto(f1,f2);
            printf("Risultato: \n");
            stampaDecimale(res);
            stampaFrazione(res);
            break;
        case '/':
            res=quoziente(f1,f2);
            printf("Risultato: \n");
            stampaDecimale(res);
            stampaFrazione(res);
            break;
        default:
            printf("Cosa scrivi? \n");
            break;
    }
    return 0;
}