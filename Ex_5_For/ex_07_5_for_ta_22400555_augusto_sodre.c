#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int numInicial, numFinal, i = 0;
	printf("Dê-me um número para início da sequência: ");
	scanf("%d", &numInicial);
	printf("Dê-me um número para final da sequência: ");
	scanf("%d", &numFinal);
	for (i = numInicial; i <= numFinal; i++){
		printf("%d\n", i);
	}
}
