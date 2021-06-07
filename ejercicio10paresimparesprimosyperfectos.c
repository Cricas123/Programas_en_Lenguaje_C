/*Realice un programa que solicite un número al usuario y calcule todos los 
números pares, impares, primos y perfectos menores a dicho número 
(iniciando desde 1) y diga cuantos hay de cada uno.*/
#include <stdio.h>

int main() {
	int n;
	int j;
	int k;
	int cont;
	
	printf("Ingrese el numero: ");
	scanf("%i",&n);
	fflush(stdin);
	
	printf("\nLos numeros pares son: ");
	cont = 0;
	for(j = 1; j<=n; j++){
		if(j%2 == 0){
		printf("%i ",j);
	    cont = cont + 1;}}
		printf("\nHay %i numeros pares",cont);
	
	printf("\n\nLos numeros impares son: ");
	cont = 0;
	for(j = 1; j<=n; j++){
	if (j%2 == 1){
		printf("%i ",j);
	cont = cont + 1;}}
	printf("\nHay %i numeros impares",cont);
	
	printf("\n\nLos numeros primos son: ");
	for(j = 1; j<=n; j++){
		cont = 0;
		for(k = 1; k<=j; k++){
		if(j%k == 0){
	cont = cont + 1;}}
	if(cont==2){
		printf("%i ",j);}}
		
	
	printf("\n\nLos numeros perfectos son: ");
	cont = 0;
	for(j = 1; j<=n; j++){
		if(j==6 || j== 28 || j==496 || j==8128){
		printf("%i ",j);
	cont = cont + 1;}}
	printf("\nHay %i numeros perfectos",cont);
	
	return 0;
}

