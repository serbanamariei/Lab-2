#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	double p,A;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);

	p=(a+b+c)/2;
	A=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Aria triunghiului este: %.2lf\n",A);

	return 0;
}
