#include <stdio.h>

int f(int d)
{
    int a[7]={0,1,9,4,2,6,9};
    if(d<0 || d>6) return 0;
    else return a[d];
}

void g(int a[]) 
{
  int i;
  for (i = 0; i < 3; i++)
    *(a + f(a[f(i)])) = f(i);
}

int main(int argc, char* argv[]) 
{
  int i, a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  g(a);
  for (i = 0; i < 10; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}