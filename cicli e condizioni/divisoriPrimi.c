#include<stdio.h>

int main()
{
    int n,j,trovato;
    printf("Inserisci un numero e ti dirò i divisori primi: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)//parto da 1 fino a n perchè 1 è sempre divisore
    {
        if(n%i==0 && i>=2)//dato che 1 è sempre divisore controllo che sia >=2
        {
            printf("%d è divisore di %d sarà primo? \n",i,n);
            j=2;//parto da 2 a controllare i divisori del divisore di n
            trovato=0;
            //ciclo per trovare i divisori di i (a sua volta divisore di n)
            while(j<=i)
            {
                if(i%j==0 && j!=i)//se j è un divsore di i e non è se stesso allora il numero i non è primo
                {
                    trovato=1;
                    //printf("%d è divisore di %d che quindi non è primo\n",j,i);
                }
                j++;
            }
            if(trovato==0)
            {
                printf("%d è primo \n",i);
            }else{
                printf("%d non è primo \n",i);
            }
        }
    }
}