#include<stdio.h>

main()
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
    printf("%s\n",s);
    //interi non letti correttamente perchè leggo 4 byte rappresentanti il valore ascii dell'1(49), 4 per il 2, 4 per il 3 e 4 per il 4 e poi li attacco 
    //viene fuori 00110100 00110011 00110010 00110001 che convertito in intero è 875770417 che è quello stampato
    n = fread(a,4,1,fp);
    printf("%d\n",a[0]);
    fclose(fp);
}