#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	printf("---------------------------");
	printf("\nComparador de números!");
	printf("\nDê-me um número: ");
	scanf("%d", &n1);
	printf("\nDê-me outro número: ");
	scanf("%d", &n2);
	if (n1 == n2)
	{
		printf("\nOs Valores são iguais! É o mesmo número: %d!", n1);
		printf("\nSó pra lembar: os números digitados foram ambos %d!", n1);
	}
	else
	{
		if (n1 > n2)
		{
			printf("\nO maior valor é %d!", n1);
			printf("\n\nSó pra lembar: os números digitados foram %d e %d!", n1, n2);
		}
		else
		{
			printf("\nO maior valor é %d!", n2);
			printf("\n\nSó pra lembrar: os números digitados foram %d e %d!", n2, n1);
		}
	}
	
}
