#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	float p_compra, p_venda, resultado;
	setlocale(LC_ALL, "Portuguese");
	printf("---------------------------");
	printf("\nCalculadora de vendas!");
	printf("\n\nDê-me o valor do preço total da compra: ");
	scanf("%f", &p_compra);
	printf("Dê-me o valor do preço total da venda: ");
	scanf("%f", &p_venda);
	resultado = p_venda - p_compra;
	if (resultado > 0)
	{
		printf("Com um preço de compra de R$%.2f e um preço de venda de R$%.2f você terá um lucro de R$%.2f", p_compra, p_venda, resultado);
	}
	else
	{
		if(resultado < 0)
		{
			printf("Com um preço de compra de R$%.2f e um preço de venda de R$%.2f você terá um prejuízo de R$%.2f", p_compra, p_venda, resultado);
		}
		else
		{
			printf("Com um preço de compra de R$%.2f e um preço de venda de R$%.2f você terá valores iguais, não tendo nem lucro nem prejuízo", p_compra, p_venda);
		}
	}
}
