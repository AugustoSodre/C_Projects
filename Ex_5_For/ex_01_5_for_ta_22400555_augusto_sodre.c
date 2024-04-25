#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float num = 0.0;
	float sum = 0.0;
	float media = 0.0;
	printf("Dê-me um número real: ");
	scanf("%f", &num);
	for (i = 0; i <= num; i++){
		sum += i;
	}
	media = sum/(i-1.0);
	printf("A soma de tal número com todos os seus antecessores é %.2f\n", sum);
	printf("A média da soma é %.2f", media);
}
