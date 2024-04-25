#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("---------------------------");
	printf("\nPar ou Ímpar?");
	printf("\nDê-me um número inteiro: ");
	scanf("%d", &num);
	if (num%2 == 0)
	{
		printf("O número %d é par!", num);
	}
	else
	{
		printf("O número %d é ímpar!", num);
	}
}
