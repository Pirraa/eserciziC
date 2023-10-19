#include<stdio.h>

int main()
{
    int n=0;
    printf("Inserisci il numero: ");
    scanf("%d",&n);

   for (int i = 0; i < n; i++)
   {
        printf("%d \n",i*i);
   }
}