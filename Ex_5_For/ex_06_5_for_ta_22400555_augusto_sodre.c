#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	unsigned long int numDigitado, numOriginal, sum = 0;
	int digito;
	printf("D�-me um n�mero que seja um unsigned long int: ");
	scanf("%lu", &numDigitado);
	numOriginal = numDigitado;
	for (; numDigitado > 0; numDigitado/=10){
		digito = numDigitado%10;
		sum += digito;
	}
	printf("\nN�mero digitado: %lu", numOriginal);
	printf("\nSoma dos n�meros: %lu\n", sum);
}
