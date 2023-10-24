#include <stdio.h>

int main()
{
    char c;
    printf("Inserisci carattere: ");
    scanf("%c",&c);

    if(c>=65 && c<=90)
        printf("Maiuscola \n");
    else if(c>=97 && c<=122)
        printf("minuscola \n");
    else if(c>=48 && c<=57)
        printf("numero \n");
    else
        printf("Carattere speciale\n");

    if(c>='A' && c<='Z')
        printf("Maiuscola \n");
    else if(c>='a' && c<='z')
        printf("minuscola \n");
    else if(c>='0' && c<='9')
        printf("numero \n");
    else
        printf("Carattere speciale\n");

    return 0;
}