#include <stdio.h>
#define DIM 5

float val(float x)
{
    return x>0?x:-x;
}

int main()
{
    float a[DIM];
    int i;
    int m;

    printf("Numeri letti dal file \n");
    for(i=0; i<DIM;i++)
    {
        scanf("%f",&a[i]);
    }

    m=0;
    for(i=1;i<DIM;i++)
        if(val(a[i])<val(a[m]))
            m=i;

    printf("Output sul file: %f\n",a[m]);
}
