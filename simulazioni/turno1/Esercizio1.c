#include<stdio.h>

float valoreAssoluto(float x)
{
    return x>=0 ? x : x*(-1);
}

float radice(float a) 
{
  float x = 1.0;
  while (valoreAssoluto(x * x - a) > 1e-5)
    x = (x + a / x) / 2.0;
  return x;
}

float f(int n)
{
    return radice((n-1.0)/(n+1.0));
}

int main()
{
    int A,B;
    
    do
    {
        printf("Inserisci il numero intero naturale A: ");
        scanf("%d",&A);
    } while (A<=0);
    
    do
    {
        printf("Inserisci il numero intero naturale B: ");
        scanf("%d",&B);
    } while (B<=0);

    if(A>B)
    {
        int tmp=A;
        A=B;
        B=tmp;
    }

    for(int i=A; i<=B; i++)
    {
        if(i%2==0)
        {
            /*float num=i-1;
            float den=i+1;
            float a = num/den;
            //radice((i-1.0)/(i+1.0));
            printf("%f \n",radice(a));*/
            printf("%f \n",f(i));
        }
        else
            printf("%d \n",i);
    }
    return 0;
}