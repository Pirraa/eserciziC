#include<stdio.h>

int main()
{
    char c;
    printf("Inserisci frase: \n");
    do{
        scanf("%c",&c);
        if(c>='a' && c<='z')
            printf("%c",c-('a'-'A'));
        else
            printf("%c",c);
    }while(c!='\n');
}