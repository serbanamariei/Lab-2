#include<stdio.h>

int main(){
	int a;
	int b;
	float ma;

	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	ma=(a+b)/2;
	printf("Media aritmetica a numerelor este: %.2lf\n",ma);

	return 0;
}
