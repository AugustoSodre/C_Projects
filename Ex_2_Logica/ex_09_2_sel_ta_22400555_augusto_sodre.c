#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("Dê-me um número: ");
	scanf("%d", &num);
	if (num >= 100)
	{
		printf("O número %d é um valor maior ou igual a cem!", num);
	}
	else
	{
		if (num < 100)
		{
			printf("O número %d é um valor menor do que cem!", num);
		}
	}
}
