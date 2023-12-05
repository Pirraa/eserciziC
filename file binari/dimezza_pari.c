#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *pf;
    int numero;
    pf=fopen("numeri.dat","r+b");
    if(pf==NULL)
    {
        printf("errore apertura!\n");
        exit(1);
    }
    while(fread(&numero,sizeof(int),1,pf)==1)
    {
        if(numero%2==0){
            numero=numero/2;
            //mi sposto con la testina al numero appena letto in modo da poterlo sostituire con la sua metà
            fseek(pf,-sizeof(int),SEEK_CUR);
            fwrite(&numero,sizeof(int),1,pf);
            //completa operazione di scrittura prima d fare la lettura successiva
            fflush(pf);
            //oppure mi riporto al byte da leggere con la fseek
            //fseek(pf,0,SEEK_SET);
            //per sapere dove si è posizionata la testina:ftell(pf)
        }
    }
    

    
}