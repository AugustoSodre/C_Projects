#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int sum, i;
	printf("Adicionador de n�meros!\n");
	for (i = 30; i >= 5; i--){
		if (i%3 == 0){
			printf("N�mero adicionado: %d\n", i);
			sum += i;
		}
	}
	printf("\nSoma dos termos: %d", sum);
}
