#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
	
	int j,k,a,b,num[20][20],f,c,i,cont2;
	
	srand(time(NULL));
	
	for(j = 0; j < 5; j++)
	{
		for(k = 0; k < 5; k++)
		{
			a = rand()%5;
			b = a + 1;
			num[j][k] = b;
		}
	}
	for(f = 0; f < 5; f++)
	{
		printf("\n");
		for(c = 0; c < 5; c++)
		{
	     printf("\t{%i}",num[f][c]);
		}
		printf("\n");
	}
	int matriz[20][20];
	int repite = 0;
	int m,n,f1,c1;
	for(f = 0; f < 5; f++)
	{
		for( c = 0; c < 5; c++)
		{
			matriz[f][c] = 0;
			int cont = 0;
			for(m = 0; m < 5; m++)
			{
				for( n = 0; n < 5; n++)
				{
					if(num[f][c] == num[m][n])
					{
						cont = cont + 1;
						matriz[f][c] = cont;
					}
					if(matriz[f][c] > repite)
					{
						repite = matriz[f][c];
						f1 = f;
						c1 = c;
					}
				}
			}
			
		}
	}
	printf("\nEL NUMERO QUE MAS SE REPITE ES EL %i con %i veces",num[f1][c1],repite);
	return 0;
}

