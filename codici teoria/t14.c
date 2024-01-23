#include <stdio.h>
#include <stdlib.h>

int f(int d)
{
    int a[7]={0,1,9,4,2,6,9};
    if(d<0 || d>6) return 0;
    else return a[d];
}

int main() 
{
    int i;
    int* p = (int*)malloc(sizeof(int) * 4);
    *p = 3;
    for (i = 0; i < 3; i++) {
        p++;
        p[0] = f(*(p-1));
    }
    for (i = 0; i < 4; i++) {
        printf("%d ", *(p--));
    }
    printf("\n");
    return 0;
}