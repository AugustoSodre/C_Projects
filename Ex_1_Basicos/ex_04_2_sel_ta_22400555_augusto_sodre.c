#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	float peso, altura;
	char genero;
	printf("---------------------------");
	printf("\nCalculadora do peso ideal!");
	printf("\nD�-me sua altura em metros: ");
	scanf("%f", &altura);
	printf("\nD�-me seu g�nero [m/f]]: ");
	genero = getche();
	if (genero != 'm')
	{
		if (genero != 'f')
		{
			printf("\nValor digitado incorreto! Digite 'f' ou 'm'!\n");
			printf("\nD�-me seu g�nero: ");
			genero = getche();
		}
	}
	if (genero == 'm')
	{
		peso = (72.7 * altura) - 58;
	}
	else
	{
		peso = (62.1 * altura) - 44.7;
	}
	printf("\nSeu peso ideal � %.2f", peso);
}
