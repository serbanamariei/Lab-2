#include<stdio.h>

double mediaAritmetica(int a, int b);

int main()
{
	int a,b;
	double ma;

	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);

	ma=mediaAritmetica(a,b);
	
	printf("Media aritmetica este %.2lf\n",ma);

	return 0;
}

double mediaAritmetica(int x, int y)
{
	double med;
	med = (x+y)/2;

	return med;
}
