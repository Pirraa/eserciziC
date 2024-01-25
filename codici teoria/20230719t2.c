#include <stdio.h>
#include <stdlib.h>

int f(int d)
{
    if(d<=0 || d>=7)
        return 0;
    int a[6]={6,5,4,3,2,1};
    return a[d-1];
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