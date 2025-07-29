#include<stdio.h>
#include<math.h>

int produs(int a, int b);
int mediaGeometrica(int a, int b);

int main()
{
	int a,b;

	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);

	int p=produs(a,b);
	int mg=mediaGeometrica(a,b);

	printf("Produsul numerelor %d si %d este %d si media lor geometrica este %d\n",a,b,p,mg);

	return 0;
}

int produs(int a, int b)
{
	int p=a*b;
	return p;
}

int mediaGeometrica(int a, int b)
{
	int mg=sqrt(produs(a,b));
	return mg;
}
