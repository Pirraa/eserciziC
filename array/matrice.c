#include <stdio.h>
#define DIM 5

void lettura(int a[][DIM],int dl)
{
    int i,j;
    for(i=0; i<dl;i++)
        for(j=0; j<dl;j++)
            scanf("%d",&a[i][j]);
}

void stampa(int a[][DIM],int dl)
{
    int i,j;
    for(i=0; i<dl;i++)
        for(j=0; j<dl;j++)
            printf("%d ",a[i][j]);
    printf("\n");
}

int simmetrica(int a[][DIM],int dl)
{
    int i,j;
    for(i=0; i<dl;i++)
        for(j=i+1; j<dl;j++)
            if(a[i][j]!=a[j][i])
                return 0;
    return 1;
}

int main()
{
    int M [DIM][DIM];
    int n;
    printf("Quante righe e colonne? ");
    scanf("%d",&n);
    printf("Inserisci %d elementi: ",n*n);
    lettura(M,n);
    stampa(M,n);
    if(simmetrica(M,n)==1)
        printf("Simmetrica \n");
    else
        printf("Non simmetrica\n");
    return 0;
}
