#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float num = 0.0;
	float sum = 0.0;
	float media = 0.0;
	printf("D�-me um n�mero real: ");
	scanf("%f", &num);
	for (i = 0; i <= num; i++){
		sum += i;
	}
	media = sum/(i-1.0);
	printf("A soma de tal n�mero com todos os seus antecessores � %.2f\n", sum);
	printf("A m�dia da soma � %.2f", media);
}
