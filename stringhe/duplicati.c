#include <stdio.h>
#include<string.h>
#define DIM 100

void rimuoviLettera(char a1[DIM], char lettera,int i)
{
    
}

int rimuoviDuplicati(char a1[DIM],char a2[DIM])
{
    int cnt=0;
    for(int j=0; j<strlen(a2);j++)
    {
        for(int i=0; i<strlen(a1);i++)
        {
            if(a1[i]==a2[j])
            {
                cnt++;
                for(int k=i; k<strlen(a1);k++)
                {
                    a1[k]=a1[k+1];
                }
            }
        }
    }
    return cnt;
}

int main()
{
    char a1[DIM],a2[DIM];
    printf("inserisci prima parola: \n");
    scanf("%s",a1);
    printf("inserisci seconda parola: \n");
    scanf("%s",a2);
    int k=rimuoviDuplicati(a1,a2);
    printf("prima stringa %s \nseconda stringa %s \nnumero rimossi %d\n",a1,a2,k);
}