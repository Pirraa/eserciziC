#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 20
#define MAXSTUD 100


typedef struct {
    char nome[DIM];
    char cognome[DIM];
    int  matricola;
} studente;

void ordina(studente a[], int dl);

int main() {
    int i, dl=0;
    studente s;
    studente ordinati[MAXSTUD];
    
    FILE* fin = fopen("nomi.txt", "r");
    
    if(fin == NULL) {
        printf("Errore nell'apertura del file di input.\n");
        exit(-1);
    }

    while(fscanf(fin, "%s %s %d", s.cognome, s.nome, &s.matricola) == 3){
        ordinati[dl] = s;
        dl++;
    }

	fclose(fin);

    ordina(ordinati,dl);
    

    FILE* fout = fopen("ordinati.txt", "w");
    if(fout == NULL) {
        printf("Errore nell'apertura del file di input.\n");
        exit(-1);
    }

    for(i=0; i<dl; i++){
        fprintf(fout, "%s %s %d\n", ordinati[i].nome, ordinati[i].cognome, ordinati[i].matricola);
    }

    fclose(fout);
	
	return 0;
}

void ordina(studente a[], int dl){ 
    int i,min,j;
    studente temp;

    // ordinamento crescente
    for(i=0; i<dl; i++){
        min = i;
        for(j=i+1; j<dl; j++){ // controllo se esiste un altro elemento di valore minore nel resto dell'array
            if(a[j].matricola < a[min].cognome){ // se trovo un elemento j di valore minore...
                min = j; // ... questo diventa il nuovo min
            }
        }
        // il nuovo min deve prendere il posto del min precedente => swap
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}