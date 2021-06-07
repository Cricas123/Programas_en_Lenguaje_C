#include <stdio.h>

//CREAMOS EL REGISTRO/ESTRUCTURA
struct persona{
	//CAMPOS DEL REGISTRO PERSONA
	char nom[20];//NOMBRE COMPLETO
	char estadocivil[10];//ESTADO CIVIL
	int edad;//EDAD
	char fechadenacimiento[30];//FECHA DE NACIMIENTO
	int cedula;//IDENTIFICACION
}
//CREAMOS LOS DATOS PARA LA PERSONAL 
persona[1000];

int main() {
	
	int n,k;
	printf("\nIngres la cantidad de personas: ");
	scanf("%i",&n);
	fflush(stdin);
	
	printf("\n\t - INICIAREMOS A GUARDA LOS DATOS DE %i personas----\n\n",n);
	
	for(k = 1; k <= n; k++)
	{
		printf("\nDATOS DE LA PERSONA %i: \n",k);
		
		printf(" - Nombre: ");
		gets(persona[k].nom);
		
		printf(" - Edad: ");
		scanf("%i",&persona[k].edad);
		fflush(stdin);
		
		printf(" - Feacha de nacimiento (DD/MM/AAAA): ");
		gets(persona[k].fechadenacimiento);
		
		printf(" = Cedula: ");
		scanf("%i",&persona[k].cedula);
		fflush(stdin);
		
		printf("\n");
	}
	
	printf("\n\n---RESULTADOS--\n\n");
	
	for(k = 1; k <= n; k++)
	{
		printf("\n%s",persona[k].nom);
		printf("\n%i",persona[k].edad);
		printf("\n%s",persona[k].fechadenacimiento);
		printf("\n%i",persona[k].cedula);
	}
	return 0;
}
