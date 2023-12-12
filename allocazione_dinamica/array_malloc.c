#include<stdlib.h>
#include<stdio.h>

int main()
{
    int dimensione;//sia fisica che logica
    printf("Inserisci il numero di elementi dell'array: ");
    scanf("%d",&dimensione);
    int *punt;
    punt=(int*)malloc(sizeof(int)*dimensione);
    for(int i=0; i<dimensione; i++)
    {
        printf("Inserisci il %d elemento: ",i+1);
        scanf("%d",&punt[i]);
    }

    for(int i=0; i<dimensione; i++)
    {
        printf("Stampo il %d elemento, %d\n",i+1,*(punt+i));
    }
    free(punt);
    return 0;
}