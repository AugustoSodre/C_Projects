#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char codigo_pecas[] = "";
int  n_pecas = 0;
float valor_pecas = 0;
float valor_total = 0;

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	printf("Dê-me o código das peças: ");
	scanf("%s", &codigo_pecas);
	printf("Dê-me o número de peças: ");
	scanf("%d", &n_pecas);
	printf("Dê-me o valor das peças: ");
	scanf("%f", &valor_pecas);
	valor_total = n_pecas * valor_pecas;
	printf("O valor total pago foi de %.2f do produto %s ", valor_total, codigo_pecas);
}
