/*Escriba un programa que pida un número entero mayor que 1 y que imprima 
si el número es un número primo o no.*/
#include <stdio.h>

int main() {
	 
	int n;
	int j;
	int cont = 0;
	
    printf("- Ingrese un numero mayor que 1: ");
	scanf("%i",&n);
	fflush(stdin);
	
	for(j = 1; j <= n; j++){
		if(n%j == 0){
		cont = cont + 1;
		}
	}
	if(cont>2){
	printf("\n\n No es un numero primo");
	}
	else
	{
		printf("\nEs un numero Primo");
	}
	return 0;
}

