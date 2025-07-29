#include<stdio.h>

int f1(double a, double b);

int main()
{
	double a,b;

	int suma;
	
	printf("a = ");
	scanf("%lf",&a);
	printf("b = ");
	scanf("%lf",&b);
	
	printf("Ati introdus numerele %.2lf si %.2lf\n",a,b);

	{
		int a=4;
		suma=f1(a,b);
		printf("In bloc\n");
		printf("Suma numerelor %d si %.2lf este %d\n",a,b,suma);
	}

	
	printf("In afara blocului\n");
	suma=f1(a,b);
	printf("Suma numerelor %.2lf si %.2lf este %d\n",a,b,suma);

	return 0;
}

int f1(double a, double b)
{
	int s;

	s=a+b;

	return s;
}
