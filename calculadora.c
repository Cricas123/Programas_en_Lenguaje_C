#include <stdio.h>

int main() {
	
	printf("\t\t\t\tCALCULADORA DE SUMA, RESTA, MULTIPLICACION Y DIVISION");
	
	float a;
	float b;
	float s;
	float r;
	float m;
	float d;
	
	printf("\n\n\t-ingrese el primer numero:");
	scanf("%f",&a);
	fflush(stdin);
	
	printf("\n\t-ingrese el segundo numero:");
	scanf("%f",&b);
	fflush(stdin);
	
	s = a + b;
	r = a - b;
	m = a * b;
	d = a / b;
	
	printf("\n\tOPERACIONES   RESULTADOS   ");
	printf("\n\t--------------------------------");
	printf("\n\t%.2f + %.2f = %.2f",a,b,s);
	printf("\n\t--------------------------------");
	printf("\n\t%.2f - %.2f = %.2f",a,b,r);
	printf("\n\t--------------------------------");
	printf("\n\t%.2f * %.2f = %.2f",a,b,m);
	printf("\n\t--------------------------------");
	printf("\n\t%.2f / %.2f = %.2f",a,b,d);
	printf("\n\t--------------------------------");
	
	return 0;
}

