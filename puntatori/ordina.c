#include<stdio.h>

void swap(int *pm, int *pn)
{
    int t;
    t=*pm;
    *pm=*pn;
    *pn=t;
}

void ordina(int *p1,int*p2)
{
    if(*p1>*p2)
    {
        //swap(&(*p1),&(*p2));
        swap(p1,p2);
    }
}

int main()
{
    int a,b;
    printf("Inserisci due interi, li ordino: ");
    scanf("%d %d",&a,&b);
    ordina(&a,&b);
    printf("Ordinati: %d %d\n",a,b);
}