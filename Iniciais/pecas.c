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
	printf("D�-me o c�digo das pe�as: ");
	scanf("%s", &codigo_pecas);
	printf("D�-me o n�mero de pe�as: ");
	scanf("%d", &n_pecas);
	printf("D�-me o valor das pe�as: ");
	scanf("%f", &valor_pecas);
	valor_total = n_pecas * valor_pecas;
	printf("O valor total pago foi de %.2f do produto %s ", valor_total, codigo_pecas);
}
