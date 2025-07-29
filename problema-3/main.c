#include<stdio.h>

int f1();

int main()
{
	int suma;
	
	suma =f1();
		
	printf("Suma numerelor introduse este %d\n",suma);

	return 0;
}

int f1()
{
	int a,b,s;

	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);

	printf("Ati introdus numerele %d si %d\n",a,b);

	s=a+b;

	return s;
}
