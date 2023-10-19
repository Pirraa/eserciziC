#include<stdio.h>

int main()
{
    printf("Tavola pitagorica");

    for(int i=1;i<10;i++)
    {
        printf("\n");
        for(int j=1; j<10; j++)
        {
             printf("%d ",i*j);
        }
    }
    printf("\n");
}