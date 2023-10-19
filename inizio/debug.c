#include <stdio.h>

int main () {
    int a , b , c ;
    printf("Inserisci a ");
    scanf ( "%d",&a);
    printf("Inserisci b ");
    scanf ( "%d",&b);
    c = a += b ;
    printf ( " %d + %d = %d \n " , a , b , c ) ;
    return 0;
}