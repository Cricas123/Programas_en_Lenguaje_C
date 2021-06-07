#include <stdio.h>
#include <math.h>
int main() {
	
		float n;
		float raiz;
		
		printf("Digite un numero: ");
		scanf("%f",&n);
		
		raiz=sqrt(n);
		
		if(n>=0){
			printf("La raiz cuadrada sera: %.3f",raiz);
		}
		else {
			printf("Tiene raiz imaginaria");
		}
	
	
	return 0;
}

