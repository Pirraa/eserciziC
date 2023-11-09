//ultima cifra numero di matricola: 9
//cerca quanto vale s all'inizio della prima iterazione in cui i è <=9
//i=5, s=188
#include<stdio.h>
int main(void) 
{
  int i = 200, s = 0;

  do {
    /*if(i<=9)
    {
      printf("%d",s);
      break;
    }*/
    if (i % 2)
      s += (i /= 2);
    else
      i--;
  } while (i >= 0);
  return 0;
}