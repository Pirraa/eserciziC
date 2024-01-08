#include<stdio.h>
int main(void) {
  int i = 10000;
  while (i > 0)
  {
    printf("RESTO:%d I:%d\n",194269%i,i);
    if (i % 3)
      i /= 3;
    else
      i--;
  }
    
  return 0;
}