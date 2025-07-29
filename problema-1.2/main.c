#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,p,mg;
	printf("a = ");
	scanf("%lf",&a);
	printf("b = ");
	scanf("%lf",&b);
	p=a*b;
	mg=sqrt(p);
	printf("Produsul nr este %.2lf si media lor geometrica este %.2lf\n",p,mg);

	return 0;
}
