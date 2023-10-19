#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;
	b=printf("%d \n",2+3);
	c=printf("%d \n",printf("a"));
	a=printf("%d \n",printf("%d",2+3));
	printf("a: %d \n",a);
	printf("b: %d \n",b);
	printf("c: %d \n",c);
}
