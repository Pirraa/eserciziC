#include <stdio.h>
//194269
int f(int d)
{
    int a[7]={1,1,9,4,2,6,9};
    if(d<=0 || d>6) return 1;
    else return a[7-d];
}

int main() {
    int a[] = {3, 2, 1}, i=0;
    do
    i = a[f(*(a + i)) % 3]--;
    while (i >= 0);
    printf("%d %d %d\n", a[2], a[1], a[0]);
    return i;
}