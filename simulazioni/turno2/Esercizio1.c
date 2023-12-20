#include<stdio.h>

int MCD(int a, int b)
{
    while(a!=b)
    {
        if(a<b)
            b=b-a;
        else
            a=a-b;
    }
    return a;
}

int main()
{
    int M;
    printf("Inserisci un numero intero M: ");
    scanf("%d",&M);

    /*for(int i=1; i<=M; i++)
    {
        for(int j=1; j<=M; j++)
            if(i==j)
            {
                float x=1;
                float y=MCD(i,j);
                printf("%.3f ",x/y);
            }
            else
                printf("%.3f ",1.000);
        printf("\n");
    }*/

    for (int i = 1; i <= M; i++) {
    for (int j = 1; j <= M; j++)
      printf("%.3f ", 1/(float)MCD(i, j));
    printf("\n");
    }
       
}