#include <stdio.h>
int main()
{ 
    int i, a, b, *c[5];
    a=20; b=30;
    //pp. 5 /6
    for (i=0; i<5;i++) 
        c[i]=&a;
    c[3]=&b;
    for (i=0; i<5;i++) 
        (*c[i])++;
    c[0] = &i;
    for (i=0; i<5;i++)
        printf("\n elemento %d = %d", i, *c[i]);
    return 0;
}