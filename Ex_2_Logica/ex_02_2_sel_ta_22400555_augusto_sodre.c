#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	printf("---------------------------");
	printf("\nComparador de n�meros!");
	printf("\nD�-me um n�mero: ");
	scanf("%d", &n1);
	printf("\nD�-me outro n�mero: ");
	scanf("%d", &n2);
	if (n1 == n2)
	{
		printf("\nOs Valores s�o iguais! � o mesmo n�mero: %d!", n1);
		printf("\nS� pra lembar: os n�meros digitados foram ambos %d!", n1);
	}
	else
	{
		if (n1 > n2)
		{
			printf("\nO maior valor � %d!", n1);
			printf("\n\nS� pra lembar: os n�meros digitados foram %d e %d!", n1, n2);
		}
		else
		{
			printf("\nO maior valor � %d!", n2);
			printf("\n\nS� pra lembrar: os n�meros digitados foram %d e %d!", n2, n1);
		}
	}
	
}
