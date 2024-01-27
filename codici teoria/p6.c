#include<stdio.h>
#include<string.h>
#include <stdlib.h>
main()
{ 
    //scrivo su file binario con la fwrite funziona 
    //(chiede solo come aprire il file perchè essendo binaria la modalità di apertura non lo apre direttamente)
    FILE *fp;
    char msg[] = "Ah, l'esame\nsi avvicina! 12345|?";
    fp = fopen("testo2.txt","wb");
    if (fp==NULL)
    exit(1); /* Errore di apertura */
    fwrite(msg, strlen(msg)+1, 1, fp);
    fclose(fp);
}