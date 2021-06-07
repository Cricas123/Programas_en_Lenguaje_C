#include <stdio.h>

int main() {
	
	float a;
	float b;
	float s;
	float r;
	float m;
	float d;
	
	printf("-ingrese el primer numero:");
	scanf("%f",&a);
	fflush(stdin);
	
	printf("-ingrese el segundo numero:");
	scanf("%f",&b);
	fflush(stdin);
	
	s = a + b;
	r = a - b;
	m = a * b;
	d = a / b;
	
	printf("\n\tla suma es %.2f",s);
	printf("\n\tla resta es %.2f",r);
	printf("\n\tla multiplicacion es %.2f",m);
	printf("\n\tla division es %.2f",d);
	return 0;
}

