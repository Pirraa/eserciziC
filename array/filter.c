#include <stdio.h>
#define dim 5

int main()
{
    int a[dim], b[dim];
    int i=0,j=0,cnt=0;
    //devo mettere in b gli elementi positivi di a
    for(i=0; i<dim; i++)
    {
        printf("Inserisci il %d elemento: ",i);
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            b[cnt]=a[i];
            cnt++;
        }
    }


    for (int k = 0; k < cnt; k++)
    {
        printf("%d \n",b[k]);
    }
    
}