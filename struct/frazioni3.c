//CON PASSAGGIO PER RIFERIMENTO
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

void frazione(int n, int d,Frazione* pf)
{
    if(d==0){
        printf("Errore denominatore nullo!\n");
        exit(1);
    }
    int m=mcd(va(n),va(d));
    //(*pf).num è equivalente a pf->num
    (*pf).num=n/m;
    pf->den=d/m;
}

int num(Frazione fr)
{
    return fr.num;
}

int den(Frazione fr)
{
    return fr.den;
}

void opposto(Frazione* pf, Frazione* pfo)
{
    frazione(-num(*pf),den(*pf),pfo);
}

void inverso(Frazione* pf, Frazione* pfi)
{
    frazione(den(*pf),num(*pf),pfi);
}

void somma(Frazione* fr1, Frazione* fr2, Frazione* pfs)
{
    frazione(num(*fr1)*den(*fr2)+den(*fr1)*num(*fr1),den(*fr1)*den(*fr2),pfs);
}

void differenza(Frazione* pf1,Frazione* pf2, Frazione* pfd)
{
    Frazione fr;
    opposto(pf2,&fr);
    somma(pf1,&fr,pfd);
}

void prodotto(Frazione *pf1,Frazione *pf2, Frazione *pfp)
{
    frazione(num(*pf1)*num(*pf2),den(*pf1)*den(*pf2),pfp);
}

void quoziente(Frazione *pf1,Frazione *pf2, Frazione *pfq)
{
    //return frazione(num(f1)/num(f2),den(f1)/den(f2));
    Frazione fr;
    inverso(pf2,&fr);
    prodotto(pf1,&fr,pfq);
}

Frazione leggiFrazione(Frazione *fr)
{
    int n,d,m;
    printf("Inserisci numeratore: ");
    scanf("%d",&n);
    printf("Inserisci denominatore: ");
    scanf("%d",&d);
    frazione(n,d,fr);
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

int main()
{
    char operazione;
    printf("Inserisci operazione: ");
    scanf("%c",&operazione);
    Frazione f1;
    Frazione f2;
    leggiFrazione(&f1);
    leggiFrazione(&f2);
    Frazione risultato;

    switch(operazione)
    {
        case '+':
            somma(&f1,&f2,&risultato);
            printf("Risultato: \n");
            stampaDecimale(risultato);
            stampaFrazione(risultato);
            break;
        case '-':
            differenza(&f1,&f2,&risultato);
            printf("Risultato: \n");
            stampaDecimale(risultato);
            stampaFrazione(risultato);
            break;
        case '*':
            prodotto(&f1,&f2,&risultato);
            printf("Risultato: \n");
            stampaDecimale(risultato);
            stampaFrazione(risultato);
            break;
        case '/':
            quoziente(&f1,&f2,&risultato);
            printf("Risultato: \n");
            stampaDecimale(risultato);
            stampaFrazione(risultato);
            break;
        default:
            printf("Cosa scrivi? \n");
            break;
    }
}