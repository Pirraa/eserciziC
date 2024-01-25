#include<stdio.h>
int main()
{
    int i=53;
    char c='c';
    int *p=(int *)&c;
    char *pc=(char *)&i;
    pc=(char *)p;
}