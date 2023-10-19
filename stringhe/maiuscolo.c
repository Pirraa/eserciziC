#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Inserisci una stringa: ");
    gets(str);

    for(int i=0; i<strlen(str);i++)
    {
        if(str[i]>96 && str[i]<123)
            str[i]=str[i]-32;
    }
    puts(str);
}