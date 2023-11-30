#include<stdio.h>
#include<stdlib.h>
#define NRIGHE 4
#define NCOLONNE 6
#define PROBMINA  0.2
typedef char Campo[NRIGHE][NCOLONNE];

double rnd_dbl(double a,double b)
{
    return a+(double)rand()/RAND_MAX*(b-a);
}

void inizializza(Campo c)
{
    int i,j;
    for(i=0; i<NRIGHE;i++)
        for(j=0; j<NCOLONNE; j++)
            if(rnd_dbl(0.0,1.0)<=PROBMINA){
                //avviene con probabilità probmina
                c[i][j]='*';
            }else{
                //avviene con probabilità 1-probmina=0.8
                c[i][j]=' ';
            }
}

/*int mineadiacenti(Campo c,int rg,int col)
{
    int k=0,h=0,i,j;
    int nmine=0;
    if(rg==NRIGHE)
        k=NRIGHE-1;
    if(col==NCOLONNE)
        h=NCOLONNE-1;
    if(rg!=0 && rg!=NRIGHE)
        k=rg-1;
    if(col!=0 && col!=NCOLONNE)
        h=col-1;
    for(i=k; i<=k+2;i++)
        for(j=h; j<=h+2; j++)
            if(c[i][j]=='*' && i<NRIGHE && j<NCOLONNE)
                nmine++;
    return nmine;
}*/

int mineAdiacenti(Campo c, int i, int j) 
{
  int nmine = 0;
  int riga, colonna;
  for (riga = i - 1; riga <= i + 1; riga++)
    for (colonna = j - 1; colonna <= j + 1; colonna++)
      if (riga >= 0 && riga < NRIGHE && colonna >= 0 && colonna < NCOLONNE &&
          c[riga][colonna] == '*')
        nmine++;

  //   if (i - 1 >= 0 && j - 1 >= 0 && c[i - 1][j - 1] == '*')
  //     nmine++;
  //   if (i - 1 >= 0 && c[i - 1][j] == '*')
  //     nmine++;
  //   if (i - 1 >= 0 && j + 1 <= NCOLONNE - 1 && c[i - 1][j + 1] == '*')
  //     nmine++;
  //   if (j - 1 >= 0 && c[i][j - 1] == '*')
  //     nmine++;
  //   if (j + 1 <= NCOLONNE - 1 && c[i][j + 1] == '*')
  //     nmine++;
  //   if (i + 1 <= NRIGHE - 1 && j - 1 >= 0 && c[i + 1][j - 1] == '*')
  //     nmine++;
  //   if (i + 1 <= NRIGHE - 1 && c[i + 1][j] == '*')
  //     nmine++;
  //   if (i + 1 <= NRIGHE - 1 && j + 1 <= NCOLONNE - 1 && c[i + 1][j + 1] ==
  //   '*')
  //     nmine++;

  /// altri casi
  return nmine;
}

void stampa(Campo c)
{
    int i,j;
    for(i=0; i<NRIGHE;i++)
    {
        for(j=0; j<NCOLONNE; j++)
        if(c[i][j]=='*')
            printf("%c",c[i][j]);
        else
            printf("%d",mineAdiacenti(c,i,j));
        printf("\n");
    }
}

int main()
{
    Campo c;
    inizializza(c);
    stampa(c);
}