#include<stdio.h>
#define dim 5
int main()
{
    int array1[5];
    int array2[]={2,4,1,6,2};
    //map(array1,array2,2*array[1]);
    for(int i=0; i<dim; i++)
    {
        array1[i]=array2[i]*2;
        printf("%d\n",array1[i]);
    }
}