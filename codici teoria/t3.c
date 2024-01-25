#include<stdio.h>

int f(int d)
{
    int a[7]={0,2,1,6,3,6,5};
    if(d<0 || d>6) return 0;
    else return a[d];
}


int main()
{
    int a=0,i[]={1,1,1};
    while(a<2)
        i[a]=f(++a);

    for(i[0]=2;i[0]>=0;i[0]--)
        printf("%d ",i[i[0]]);
    printf("\n");
    return 0;
}