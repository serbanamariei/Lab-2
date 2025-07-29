#include<stdio.h>
#include<math.h>

int semip(int a, int b, int c);
int arie(int a, int b, int c);

int main()
{
	int a,b,c;
	
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);

	int A=arie(a,b,c);

	printf("Aria triunghiului cu laturile %d, %d si %d este %d\n",a,b,c,A);

	return 0;
}

int semip(int a, int b, int c)
{
	return (a+b+c)/2;
}

int arie(int a, int b, int c)
{
	int p=semip(a,b,c);
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
