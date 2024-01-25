#include<stdio.h>

int f(int d)
{
    if(d==1)return 2;
    if(d==2)return 1;
    if(d==3)return 6;
    if(d==4)return 3;
    if(d==5)return 6;
    if(d==6)return 5;
    if(d>6||d<=0)return 0;
}

int main(int argc,char* argv)
{
    int i=8;
    while(!(f(--i)));
    do
    {
        printf("%c",'0'+f(i--));
    } while (f(i));
    printf("\n");
    return 0;
}