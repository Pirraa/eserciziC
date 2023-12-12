#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* alloca(int dimensione)
{
    char *pc;
    pc=(char*)malloc(dimensione);
    return pc;
}

int main()
{
    char *s; //indirizzo da cui allocare la stringa
    s=alloca(100);
    strcpy(s,"ferrara");
    printf("%s\n",s);
    free(s);
    return 0;
}