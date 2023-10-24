#include<stdio.h>

int main()
{
    int c;
    for(c=0; c<=127; c++)
    {
        printf("%c %d \n",c,c);
    }

    for(char c=0; c>=0; c++)
        printf("%c %d \n",c,c);
}