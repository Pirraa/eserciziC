#include<stdio.h>

int f(int d)
{
    int a[7]={0,2,1,6,3,6,5};
    if(d<0 || d>6) return 0;
    else return a[d];
}

int main()
{
    int i=0,a[]={2,2,2};
    while((*(a+(a[f(++i)%3]%3)))--);
    for(i=0;i<3;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}