#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("D�-me um n�mero: ");
	scanf("%d", &num);
	if (num >= 100)
	{
		printf("O n�mero %d � um valor maior ou igual a cem!", num);
	}
	else
	{
		if (num < 100)
		{
			printf("O n�mero %d � um valor menor do que cem!", num);
		}
	}
}
