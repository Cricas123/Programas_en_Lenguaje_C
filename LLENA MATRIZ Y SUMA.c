#include <stdio.h>

int main() {
	
	int filas, columnas,f,c;
	
	//PIDO EL TAMANIO DE LA MATRIZ
	
	printf("VAMOS A INGRESAR EL TAMANIO DE LA MATRIZ");
	printf("\nIngrese el numero de filas:");
	scanf("%i",&filas);
	fflush(stdin);
	
	printf("\n- Ingrese el numero de columnas: ");
	scanf("%i",&columnas);
	fflush(stdin);
	
	int matriz[filas][columnas];
	
	printf("\n");
	
	//LLENAMOS LA MATRIZ DE F X C QUE INGRESO EL USUARIO
	
	for(f = 0; f < filas; f++)
	{
		for(c = 0; c < columnas; c++)
		{
			printf("DIGITE EL VALOR DE LA POSICION F[%i]C[%i]",f+1,c+1);
			scanf("%i",&matriz[f][c]);
			fflush(stdin);
		}
	}
	printf("\nMATRIZ = \n");
	for(f = 0; f < filas; f++)
	{
		for(c = 0; c < columnas; c++)
		{
			printf("\t%i",matriz[f][c]);
		}
		printf("\n");
	}
	return 0;
}

