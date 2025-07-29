#include<stdio.h>

int suma(int a, int b);
int mediaAritmetica(int a, int b);

int main()
{
	int a,b;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);

	int s=suma(a,b);
	int ma=mediaAritmetica(a,b);
	printf("Suma numerelor %d si %d este %d si media lor aritmetica este %d",a,b,s,ma);

	return 0;
}

int suma(int a, int b)
{
	int s=a+b;
	return s;
}

int mediaAritmetica(int a, int b)
{
	int ma=suma(a,b)/2;
	return ma;
}
