#include<stdio.h>

int primo(int n) {
  int i, potenzialmente_primo;
  potenzialmente_primo = n % 2 || n == 2;
  i = 3;
  while (potenzialmente_primo && i * i <= n) {
    if (n % i == 0)
      potenzialmente_primo = 0;
    i += 2;
  }
  return potenzialmente_primo;
}

int f(int a)
{
    int max;
    for(int i=0; i<=a; i++)
    {
        if(primo(i)==1)
            max=i;
    }
    return max;
}

int numPrimi(int a)
{
    int cnt=0;
    for(int i=2; i<=a; i++)
    {
        if(primo(i)==1)
            cnt++;
    }
    return cnt;
}

int main()
{
  int M;
  printf("Inserisci un numero intero M: ");
  scanf("%d",&M);
  /*for(int i=2; i<=M; i++)
  {
       printf("%d %d %d \n",i,f(i),numPrimi(i));
  }*/

  int primi=0;
  for (int i = 2; i <= M; i++) {
    if (primo(i))
      primi++;
    printf("%d\t%d\t%d\n", i, f(i), primi);
  }
}