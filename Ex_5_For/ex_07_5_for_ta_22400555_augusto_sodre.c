#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int numInicial, numFinal, i = 0;
	printf("D�-me um n�mero para in�cio da sequ�ncia: ");
	scanf("%d", &numInicial);
	printf("D�-me um n�mero para final da sequ�ncia: ");
	scanf("%d", &numFinal);
	for (i = numInicial; i <= numFinal; i++){
		printf("%d\n", i);
	}
}
