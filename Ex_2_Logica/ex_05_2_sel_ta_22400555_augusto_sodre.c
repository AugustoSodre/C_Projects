#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("---------------------------");
	printf("\nPar ou �mpar?");
	printf("\nD�-me um n�mero inteiro: ");
	scanf("%d", &num);
	if (num%2 == 0)
	{
		printf("O n�mero %d � par!", num);
	}
	else
	{
		printf("O n�mero %d � �mpar!", num);
	}
}
