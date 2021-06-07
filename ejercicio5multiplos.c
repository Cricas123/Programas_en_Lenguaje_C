/*MULTIPLOS (Que el usuario escriba un número, ahora escriba el intervalo 
donde desea saber cuántos múltiplos de ese número hay y cuales son.)*/
#include <stdio.h>

int main() {
	
	int n;
	int m1;
	int m2;
	int j;
	int cont;
	
	printf("- Ingrese el numero del que desea saber sus multiplos: ");
	scanf("%i",&n);
	fflush(stdin);
	
	printf("\n- Ingrese el primero numero del intervalo: ");
	scanf("%i",&m1);
	fflush(stdin);
	
	printf("\n- Ingrese el segundo numero del intervalo: ");
	scanf("%i",&m2);
	fflush(stdin);
	
	printf("\nLos multiplos de %i que hay en el intervalo son:\n\n",n);
	cont = 0;
	for( j = m1; j<=m2; j++){
		if(j%n == 0){
		printf("%i ",j);
	cont = cont + 1;}}
	
	printf("\n\nHay %i multiplos de %i en el intervalo",cont,n);
	
	printf("\n\nLos que no son multiplos de %i son:\n\n ",n);\
		cont = 0;
	for(j = m1; j<=m2; j++){
		if(j%n == 1){
		printf("%i ",j);
	cont = cont + 1;}}
	printf("\n\nHay %i que no son multiplos de %i",cont,n);
	
	
	
	return 0;
}

