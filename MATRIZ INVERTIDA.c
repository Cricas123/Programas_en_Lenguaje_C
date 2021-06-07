#include <stdio.h>

int main() {
	
	int x[3][4];
	int f,c;
	
	for(c = 0; c < 4; c++)
	{
		for(f = 0; f < 3; f++)
		{
			printf("Ingrese el valor: ");
			scanf("%i",&x[f][c]);
			fflush(stdin);
		}
	}
	
	printf("\nEL DATO DE LA POSICION [1][3] es %i",x[1][3]);
	return 0;
}

