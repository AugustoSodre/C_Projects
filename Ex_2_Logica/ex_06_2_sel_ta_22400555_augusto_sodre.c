#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	float p_compra, p_venda, resultado;
	setlocale(LC_ALL, "Portuguese");
	printf("---------------------------");
	printf("\nCalculadora de vendas!");
	printf("\n\nD�-me o valor do pre�o total da compra: ");
	scanf("%f", &p_compra);
	printf("D�-me o valor do pre�o total da venda: ");
	scanf("%f", &p_venda);
	resultado = p_venda - p_compra;
	if (resultado > 0)
	{
		printf("Com um pre�o de compra de R$%.2f e um pre�o de venda de R$%.2f voc� ter� um lucro de R$%.2f", p_compra, p_venda, resultado);
	}
	else
	{
		if(resultado < 0)
		{
			printf("Com um pre�o de compra de R$%.2f e um pre�o de venda de R$%.2f voc� ter� um preju�zo de R$%.2f", p_compra, p_venda, resultado);
		}
		else
		{
			printf("Com um pre�o de compra de R$%.2f e um pre�o de venda de R$%.2f voc� ter� valores iguais, n�o tendo nem lucro nem preju�zo", p_compra, p_venda);
		}
	}
}
