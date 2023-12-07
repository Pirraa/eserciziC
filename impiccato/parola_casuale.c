#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef char Parola[51];

Parola parole[100000];

void stampa()
{

}

int main(int argc, char*argv[])
{
    //./parola_casuale words.italian.txt
    //argc -> 2
    int dl;
    int indice_casuale;
    srand(time(NULL));
    FILE *pf;
    if(argc!=2)
    {
        printf("sintassi sbagliata");
        exit(2);
    }
    pf=fopen(argv[1],"rt");
    if(pf==NULL)
    {
        printf("errore apertura file %s\n",argv[1]);
        exit(1);
    }
    dl=0;
    while(fscanf(pf,"%s",parole[dl])==1)
        dl++;
    indice_casuale=rand()%dl; //numero compreso fra 0 e dl
    printf("%s\n",parole[indice_casuale]);
    return 0;    
}