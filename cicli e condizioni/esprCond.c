#include<stdio.h>

int main()
{
    int a;
    printf("Inserisci numero: ");
    scanf("%d",&a);
    a>0?printf("%d \n",a):printf("%d \n",(-1)*a);
    return 0;
}