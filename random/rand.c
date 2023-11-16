#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DIM 30

int rnd_int(int min,int max)
{
    return min+rand()%(max-min+1);
}

int main()
{
    srand(time(NULL));
    for(int i=0; i<DIM; i++)
        printf("%d \n",rnd_int(0,99));
    printf("%d \n",-1);
    return 0;
}