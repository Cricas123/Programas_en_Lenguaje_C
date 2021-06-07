/*Realice un programa que permita calcular el area de un triangulo
conociendo su base y su altura.

AREA DE UN TRIANGULO = (b * h)/2

NOTA: AHORA REALICE EL PROGRAMA PARA QUE EL USUARIO PUEDA INGRESAR NUMEROS
CON DECIMALES, LA RESPUESTA DEBE SER MOSTRADA CON TRES DECIMALES.*/

/*LIBRERIAS O BIBLIOTECAS*/
#include <stdio.h>

/*FUNCION PRINCIPAL*/
int main() {
	
	/*CREACION DE VARIABLES DE TIPO ENTERO*/
	float b; /*variable entera para la base*/
	float h; /*variable entera para la altura*/
	float area;/*variable entera para el area*/
	
	/*TITULO DEL PROGRAMA*/
	printf("  -PROGRAMA PARA CALCULAR EL AREA DE UN TRIANGULO-  ");
	
	/*INTERACCION CO EL USUARIO*/
	printf("\n\n1. Ingrese la base: ");
	scanf("%f",&b);
	fflush(stdin);
	
	printf("\n2. Ingrese la altura: ");
	scanf("%f",&h);
	fflush(stdin);
	
	/*OPERACIONES*/
	area = (b * h)/2;
	
	/*IMPRESION DE RESULTADOS EN PANTALLA*/
	printf("\n RESPUESTA: El area del triangulo es de %.3f",area);
	return 0;
}

