#include <stdio.h>
#include "radq.h"

int main() {
  float a;
  float x;
  printf("Inserisci un numero reale\n");
  scanf("%f", &a);

  printf("radice: %f\n", radq(a));
}