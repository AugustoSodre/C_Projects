#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
	setlocale(LC_ALL, "Portuguese");
	float numElementos = 0;
	float somaElementos = 0;
	float media = 0;
	int contador = 0;
	
	printf("Deseja fazer a m�dia de quantos elementos: ");
	scanf("%f", &numElementos);
	
	while (contador < numElementos) {
		float elementoLocal = 0;
		printf("Elemento n�mero %d: ", contador + 1);
		scanf("%f", &elementoLocal);
		somaElementos = somaElementos + elementoLocal;
		contador++;
	}
	media = somaElementos / numElementos;
	printf("Sua m�dia foi de %.2f", media);
}
