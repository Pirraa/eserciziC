#include <stdio.h>

main ()
{
    int i = 100;
    int* p = ( int *) 100;
    printf ( " i vale % d ; i + 1 vale % d \n " , i , i + 1) ; //100,101
    printf ( " p vale % d ; p + 1 vale % d \n " , p , p + 1) ; //100,104
    int a[10],*a2;
    a==&a[0];
    *(p+2)==a[2]; //p+1->il valore di p diventa p+sezeof(int) quindi p+4
}