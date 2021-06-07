/*Realice un programa que permita calcular la altura de un cono conociendo
el volumen y el radio de su base

VOLUMENDEUNCONO = (1/3)*(PI*r^2*h)

Entonces, al despejar la altura "h" de la formula tendriamos que:

h = (3*V)/(PI*r^2) */

/*LIBRERIAS O BIBLIOTECAS*/
#include <stdio.h>

/*FUNCION PRINCIPAL*/
int main() {
	
	/*CREACION DE VARIABLES DE TIPO FLOTANTE*/
	float v;/*Variable entera para el volumen*/
	float r;/*Variable entera para el radio*/
	float h;/*Variable entera para la altura*/
	
	/*TITULO DEL PROGRAMA*/
	printf(" -PROGRAMA PARA CALCULAR LA ALTURA DE UN CONO-");
	
	/*INTERACCION CON EL USUARIO*/
	printf("\n\n 1. Ingrese el volumen de cono: ");
	scanf("%f",&v);
	fflush(stdin);
	
	printf(" 2. Ingrese el radio del cono: ");
	scanf("%f",&r);
	fflush(stdin);
	
	/*OPERACIONES*/
	h = ((3*v)/(3.141592*(r*r)));
	
	/*IMPRESION DE RESULTADOS EN PANTALLA*/
	printf("\n RESPUESTA: La altura del cono es de: %.2f",h);
	
	return 0;
}

