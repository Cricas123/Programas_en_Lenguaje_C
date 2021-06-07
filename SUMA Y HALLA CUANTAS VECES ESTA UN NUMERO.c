
#include <stdio.h>

int main (){
	
	int filas,columnas,f,c,b,cont,s;
	
	printf (" ");
	
	printf ("\n\n - Ingresar el numero de filas: ");
	scanf ("%i",&filas);
	fflush (stdin);
	
	printf ("\n\n - Ingresar el numero de columnas: ");
	scanf ("%i",&columnas);
	fflush (stdin);
	
	int m[filas][columnas];
	
	printf ("\n");
	
	for (f = 0; f < filas; f ++){
		
		for (c = 0; c < columnas; c ++){
			
			printf (" Ingrese el valor de la posicion F[%i] C[%i]: ",f+1,c+1);
			scanf ("%i",&m[f][c]);
			fflush (stdin);
		}
		
	}
	printf ("\n");
	printf ("Los datos de la matriz son los siguientes:\n\n");
	
	for (f = 0; f < filas; f++){
		
		for (c = 0; c < columnas; c++){
			
			printf ("\t %i",m[f][c]);
		}
		printf ("\n");
	}
	s = 0;
	
	for (f = 0; f < filas; f++)
	{
		for (c = 0; c < columnas; c++)
		{
			s = s + m[f][c];
		}
	}
	printf("\nLa suma de la matriz es: %i",s);
	printf ("\n\n Que numero desea buscar en la matriz: ");
	scanf ("%i",&b);
	fflush (stdin);
	
	cont = 0;
	for (f = 0; f < filas; f ++){
		
		for (c = 0; c < columnas; c ++){
			
			if (b == m[f][c]){
				
				cont = cont + 1;
			}
		}
		
	}
	printf ("\n\t R/ El numero %i esta %i veces.",b,cont);
	
	return 0;
}
