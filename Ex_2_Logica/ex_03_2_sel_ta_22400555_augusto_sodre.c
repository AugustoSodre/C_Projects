#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void)
{
	setlocale(LC_ALL, "Portuguese");
	int n1 = 0;
	printf("---------------------------");
	printf("\nAnalisador de n�meros");
	printf("\nD�-me um n�mero: ");
	scanf("%d", &n1);
	printf("---------------------------");
	printf("\nResultados");
	if (n1 > 0)
	{
		printf("\nO n�mero %d � positivo, e seu dobro � %d", n1, n1*2);
	}
	else
	{
		if (n1 == 0)
		{
			printf("\nO n�mero 0 � nulo.");
		}
		else
		{
			printf("\nO n�mero %d � negativo, e seu triplo � %d", n1, n1*3);
		}
	}
	
}
