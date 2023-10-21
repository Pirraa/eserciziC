#include <stdio.h>

int primo(int n) 
{
    int i, potenzialmente_primo;
    potenzialmente_primo = n % 2 || n == 2;
    i = 3;
    while (potenzialmente_primo && i * i <= n) {
        if (n % i == 0)
            potenzialmente_primo = 0;
        i += 2;
    }
    return potenzialmente_primo;
}

int main(void) 
{
    int i, cont = 0;
    int nMatricola=44122;
    int numero;
    for (i = 44122; cont=0; i++)
        if (primo(i)){
            cont++;
            numero=i;
        }
    printf("%d\n", numero);
    return 0;
}