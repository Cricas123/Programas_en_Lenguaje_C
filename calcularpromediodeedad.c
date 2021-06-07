/*Dada la edad de tres personas, calcular el PROMEDIO DE EDAD*/

/*LIBRERIAS O BIBLIOTECAS*/
#include <stdio.h>

/*FUNCION PRINCIPAL*/
int main() {
/*CREACION DE VARIABLES DE TIPO FLOTANTES*/	
float edad1; /*Variable flotante para la edad 1*/
float edad2; /*Variable flotante para la edad 2*/
float edad3; /*Variable flotante para la edad 3*/
float prom; /*Variable flotante para el promedio de edades*/

/*Titulo del programa*/
printf(" -Programa para calcular el promedio de edad de 3 personas-");

/*Interaccion con el usuario*/
printf("\n\n1. Ingrese la primer edad:");
scanf("%f",&edad1);
fflush(stdin);

printf("\n2. Ingrese la segunda edad:");
scanf("%f",&edad2);
fflush(stdin);

printf("\n3. Ingrese la tercer edad:");
scanf("%f",&edad3);
fflush(stdin);

/*OPERACIONES*/
prom = (edad1+edad2+edad3)/3;

if(prom >= 20)
{
	printf("\n\n\tBIENVENIDOS AL CONCURSO!, su prom de edad es %.2f",prom);
}
else
{
	printf("\n\n\tSAQUEN AL MAS JOVEN Y VUELVAN A INTENTAR, su prom de edad es %.2f",prom);
}
return 0;
}

