#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{ 
    FILE *fp;
    char s[10];
    int a[10];
    int n;
    //se leggo da un file di testo con fread:
    //preleva quanti byte passo come parametro il numero di volte passato (qui legge 1 byte 10 volte)
    //ad esempio se leggo a preleva i byte corrispondenti al valore ascii della a (97), se leggo 1 preleva i byte corrispondenti al valore ascii dell'1 (49)
    //questi numeri binari sono convertiti in decimale attaccando i byte 
    fp = fopen("testo.txt","rb");
    //stringa stampata correttamente perchè leggo 1 byte e il valore ascii corrisponde allla cifra 
    n = fread(s,1,10,fp);
    printf("lettura lettere con fread da file di testo: %s\n",s);
    //interi non letti correttamente perchè leggo 4 byte rappresentanti il valore ascii dell'1(49), del 2(50) del 3(51) e del 4(52) e poi li attacco convertendoli in intero
    //viene fuori 00110100 00110011 00110010 00110001 che convertito in intero è 875770417 che è quello stampato
    n = fread(a,4,1,fp);
    printf("lettura interi con fread da file di testo: %d\n",a[0]);
    fclose(fp);


    FILE *fp2;
    n=31466;
    fp2 = fopen("output.txt","wt");
    //la fprintf converte ogni cifra dell'intero nel suo valore ascii e lo stampa nel file
    //31466 corrisponde a: 00110011 (3) 00110001 (1) 00110100 (4) 00110110 (6) 00110110 (6)
    fprintf(fp2,"%d", n);
    //la fwrite converte prende il numero intero scrittto in binario e scrive i valori ascii corrispondenti ai gruppi di 8 bit nel file
    //31466=01111010 11101010 quindi emette i caratteri corrispondenti a questi numeri binari nella tabella  zÛ
    fwrite(&n, sizeof(int), 1, fp2);
    fclose(fp2);


    //scrivo su file binario con la fwrite funziona 
    //(chiede solo come aprire il file perchè essendo binaria la modalità di apertura non lo apre direttamente)
    FILE *fp3;
    char msg[] = "Ah, l'esame\nsi avvicina! 12345|?";
    fp3 = fopen("testo2.txt","wb");
    if (fp==NULL)
    exit(1); /* Errore di apertura */
    fwrite(msg, strlen(msg)+1, 1, fp3);
    fclose(fp3);


    FILE *fp4;
    int x1;
    int x2;
    fp4 = fopen("input.txt","rt");//nel file c'è scritto 23
    //fscanf legge i due byte corrispondenti ai valori ascii del 2 e del 3 e poi li converte in intero perchè c'è il %d
    fscanf(fp4, "%d", &x1); 
    //fread legge i due byte corrispondenti ai valori ascii del 2 e del 3 e li trasforma in un intero attaccandoli 
    fread(&x2, sizeof(int)/2, 1, fp4);
    printf("fscanf di 23: %d  fread di 23: %d\n",x1,x2);
    fclose(fp4);

    return 0;
}