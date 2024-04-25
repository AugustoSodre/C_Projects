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
	printf("\nDê-me sua altura em metros: ");
	scanf("%f", &altura);
	printf("\nDê-me seu gênero [m/f]]: ");
	genero = getche();
	if (genero != 'm')
	{
		if (genero != 'f')
		{
			printf("\nValor digitado incorreto! Digite 'f' ou 'm'!\n");
			printf("\nDê-me seu gênero: ");
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
	printf("\nSeu peso ideal é %.2f", peso);
}
