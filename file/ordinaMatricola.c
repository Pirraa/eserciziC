#include<stdio.h>
typedef struct{
    char nome[20];
    char cognome[20];
    int matricola;
}studente;


int main()
{
    FILE* pf;
    studente studenti[100];
    int dl=0;
    pf=fopen("studenti.txt","rt");
    int nparole=0;
    do{
        nparole=fscanf(pf,"%s %s %d",studenti[dl].nome,studenti[dl].cognome,&studenti[dl].matricola);
        dl++;
    }while(nparole!=-1);
        
    for (int i = 0; i < dl-1; i++) {
        for (int j = 0; j < dl-i-1; j++) {
            if (studenti[j].matricola > studenti[j+1].matricola) {
                // Scambia gli elementi se sono nell'ordine sbagliato
                studente temp=studenti[j];
                studenti[j]=studenti[j+1];
                studenti[j+1]=temp;
            }
        }
    }
    FILE *pf2=fopen("ordinati.txt","wt");
    for(int i=1; i<dl; i++)
        fprintf(pf2,"%s %s %d\n",studenti[i].nome,studenti[i].cognome,studenti[i].matricola);
}