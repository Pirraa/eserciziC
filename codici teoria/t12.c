#include <stdio.h>
int f(int d)
{
    int a[7]={0,1,9,4,2,6,9};
    if(d<0 || d>6) return 0;
    else return a[d];
}

int main(int argc, char* argv[]) 
{
    int i = 2, a[] = {2, 1, 0};
    while (i)
    a[a[f(i--) % 3]] = 0;
    for (i = 0; i < 3; i++)
    printf("%d ", a[i]);
    printf("\n");
    return 0;
}