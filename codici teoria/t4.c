#include<stdio.h>

int f(int d)
{
    int a[7]={0,1,2,3,4,5,6};
    if(d<0 || d>6) return 0;
    else return a[7-d];
}

int main()
{
    char s[]="ABCDEFGHIJKLMNOPQRSTUVQXYZ";
    int i=1;
    while(i<7){
        printf("%c",*((char*)((int*)s+i)));
        i+=f(i)?f(i):1;
    }
    printf("\n");
}