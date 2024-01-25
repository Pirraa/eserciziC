#include<stdio.h>

int main()
{
    //a+=b significa assegno ad a il valore di a+b--------a*=b significa assegno ad a il valore di a*b
    int a=2,b=3,c=4;
    int j=a-=b-=c;//3-4=-1---------2-(-1)=3-------associatività a destra, dopo questa operazione a vale 3, b vale -1, c vale 4
    printf("%d\n",j);

    int k=a*=b*=c;//(-1)*4=-4-----assegno -4 a b---------3*(-4)=-12--------assegno -12 ad a-----------k vale -12
    printf("%d\n",k);

    //il valore di a-- è il valore di a senza decremento e questo valore lo moltiplico per 2 e lo assegno a i 
    int i=(a--)*2;
    printf("%d\n",i);

    //il valore di ++b è il valore di b con l'incremento, quindi questo valore lo moltiplico per 2 e lo assegno a w
    int w=(++b)*2;
    printf("%d\n",w);
}