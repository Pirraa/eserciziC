#include<stdio.h>
#include<stdlib.h>

void concatena(FILE *out,char *file)
{
    FILE *in;
    char carattere;
    in=fopen(file,"rt");
    while(fscanf(in,"%c",&carattere)==1)
    {
        fprintf(out,"%c",carattere);
    }
    fprintf(out,"\n");
}

int main(int argc,char*argv[])
{
    FILE *out;
    out=fopen(argv[1],"wt");
    for(int i=2; i<argc;i++)
        concatena(out,argv[i]);
    return 0;
}