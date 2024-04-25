#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int n1 = 0;
	printf("---------------------------");
	printf("\nAnalisador de números");
	printf("\nDê-me um número: ");
	scanf("%d", &n1);
	printf("---------------------------");
	printf("\nResultados");
	if (n1 > 0)
	{
		printf("\nO número %d é positivo, e seu dobro é %d", n1, n1*2);
	}
	else
	{
		if (n1 == 0)
		{
			printf("\nO número 0 é nulo.");
		}
		else
		{
			printf("\nO número %d é negativo, e seu triplo é %d", n1, n1*3);
		}
	}
	
}
