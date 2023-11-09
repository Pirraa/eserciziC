//trova il primo valore di i > 194269
//194273
#include<stdio.h>
int main(void) {
  int i = 1;

  while (i < 1000000)
  {
    if(i>194269)
    {
        printf("%d",i);
        break;
    }
    i += i % 4 ? 3 : 5;
  }
  
  return 0;
}