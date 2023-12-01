#include<stdio.h>
#include<string.h>

int main()
{
    char parola[]="impiccato";
    char maschera[strlen(parola)+1];
    int ntentativi=strlen(parola)+1;
    char lettera;
    int i;

    for(int i=0; i<strlen(parola);i++)
    {
        if(parola[i]=='a' || parola[i]=='e'|| parola[i]=='i' || parola[i]=='o' || parola[i]=='u')
            maschera[i]='+';
        else
            maschera[i]='-';
    }
    maschera[strlen(parola)]='\0';
    printf("Giochiamo: hai %d tentativi\n",ntentativi);
    printf("%s\n",maschera);
    for(i=1; i<=ntentativi; i++)
    {
        printf("\n");
        printf("Inserisci una lettera: ");
        scanf(" %c",&lettera);
        for(int j=0; j<strlen(parola);j++)
            if(parola[j]==lettera)
                maschera[j]=lettera;
        printf("%s ",maschera);
        printf("tentativi rimanenti: %d\n",ntentativi-i);
        if(strcmp(maschera,parola)==0)
        {
            printf("Hai indovinato\n");
            break;
        } 
    }
    if(i==ntentativi+1)
        printf("Hai perso\n");
    return 0;
}