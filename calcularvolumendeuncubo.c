/*Realice un programa que permita calcular el volumen
de un cubo conociendo la longitud de sus tres lados
(no tienen que ser iguales)
 
VOLUMEN DE UN CUBO = L*L*L

NOTA:AHORA REALICE EL PR0GRAMA PARA QUE EL USUSARIO PUEDA INGRESAR NUMEROS
CON DECIMALES, LA RESPUESTA DEBE SER MOSTRADA C0N 3 DECIMALES
 
/*LIBRERIAS O BIBLIOTECAS*/
#include <stdio.h>

/*FUNCION PRINCIPAL*/
int main() {
	
	float lado1; /*Variable entera para el lado 1*/
	float lado2; /*Variable entera para el lado 2*/
	float lado3; /*Variable entera para el lado 3*/
	float vol;   /*Variable entera para el volumen*/
	
	/*TITULO DEL PROGRAMA*/
	printf(" -PROGRAMA PARA CALCULAR EL VOLUMEN DE UN CUBO-");
	
	/*INTERACCION CON EL USUARIO*/
	printf("\n\n 1. Ingrese el alto:  ");
	scanf("%f",&lado1);
	fflush(stdin);
	
	printf(" 2. Ingrese el ancho:  ");
	scanf("%f",&lado2);
	fflush(stdin);
	
	printf(" 3. Ingrese el largo:  ");
	scanf("%f",&lado3);
	fflush(stdin);
	
	/*OPERACIONES*/
	vol = lado1*lado2*lado3; /*Calculo del volumen del cubo*/
	
	/*IMPRESION DE RESULTADOS EN PANTALLA*/
	printf("\n RESPUESTA: El volumen del cubos es:%.3f",vol);	
	return 0;
}

