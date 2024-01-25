#include <stdio.h>
int f(int d)
{
    int a[7]={0,1,9,4,2,6,9};
    if(d<0 || d>6) return 0;
    else return a[d];
}

void g(int* p, int i) 
{
    *(p + i) = 0;
}

int main() 
{
    int a[] = {1, 1, 1, 1, 1};
    int i = 1;
    while (i < 5 && a[i++])
    g(a, f(i) % 5);
    for (i = 0; i < 5; i++)
    printf("%d ", a[i]);
    printf("\n");
    return 0;
}