#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int n, i = 0;
	float h = 0;
	printf("D�-me um n�mero n para a sequ�ncia: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		h += 1.0/i;
	}
	printf("Valor aproximado de H: %.2f\n", h);
}
