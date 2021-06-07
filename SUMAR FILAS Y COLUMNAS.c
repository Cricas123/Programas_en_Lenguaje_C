#include <stdio.h>

int main() {
	
	int f,c,sumfila,sumcolumna,matriz[3][3];
	
	for(f = 0; f < 3; f ++)
	{
		for(c = 0; c < 3; c++)
		{
			printf("\n Numero [%i][%i]: ",f,c);
			scanf("%i",&matriz[f][c]);
			fflush(stdin);
		}
	}
	printf("\n");
	for(f = 0; f < 3; f ++)
	{
		sumfila = 0;
		for(c = 0; c < 3; c++)
		{
			printf("\t%i ",matriz[f][c]);
			sumfila = sumfila + matriz[f][c];
		}
		printf("\t%i",sumfila);
		printf("\n");
	}
	printf("\n");
	for(f = 0; f < 3; f ++)
	{
		sumcolumna = 0;
		for(c = 0; c < 3; c++)
		{
			sumcolumna = sumcolumna + matriz[c][f];
		}
		printf("\t%i",sumcolumna);
    }
	return 0;
}

