# include <stdio.h>

int main () 
{
    int a = 1 , b = 2;
    int * pa = &a , * pb = & b ;
    * pa = * pb ;
    printf ( "%d %d \n " , * pa , * pb );//2 2 
    * pa = 3;
    printf ( "%d %d \n " , * pa , * pb );//3 2 (se avessi fatto pa=pb nella terza riga avrebbe stampato 3 3)
    return 0;
}