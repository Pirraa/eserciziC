#include <stdio.h>
#define dim 21

int main()
{
    int a,b,c;
    float ascisse[dim],ordinate[dim],cnt=-1.0;
    //ascisse: map(i,-1.0+i*0.1)
    //ordinate: map(ascisse, a*ascisse^2+b*ascisse+c)
    printf("Inserisci a: ");
    scanf("%d",&a);
    printf("Inserisci b: ");
    scanf("%d",&a);
    printf("Inserisci c: ");
    scanf("%d",&a);
    for(int i=0; i<dim; i++)
    {
        //ascisse[i]=cnt;
        //cnt+=0.1;
        ascisse[i]=-1.0+0.1*i;
        ordinate[i]=ascisse[i]*ascisse[i]*a+ascisse[i]*b+ascisse[i];
        printf("%.2f %.2f \n",ascisse[i],ordinate[i]);
    }
}