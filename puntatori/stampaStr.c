#include<stdio.h>

void f (char*s) 
{
    while (*s) //condizione finchè arrivo a '\0'
        printf ("%c" ,*s++) ; //s aumenta di 1 byte ogni ciclo
}

int main () 
{
    f("Hello \n") ;
    return 0;
}