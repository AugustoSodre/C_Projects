#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int dia, ano;
	char mes[10];
	printf("---------------------------");
	printf("\nCalculador de idade de voto");
	printf("\nEm que dia voc� nasceu? ");
	scanf("%d", &dia);
	printf("\nEm que m�s voc� nasceu? ");
	scanf("%s", mes);
	printf("\nEm que ano voc� nasceu? ");
	scanf("%d", &ano);
	printf("\nVoc� nasceu no dia %d de %s de %d", dia, mes, ano);
	int idade = 2024 - ano;
	if (idade == 16)
	{
		if (mes[0] == 'J' && mes[1] == 'a')
		{
			idade = 16;
		}
		else
		{
			if (mes[0] == 'F')
			{
				idade = 16;
			}
			else
			{
				if (mes[0] == 'M' && mes[1] == 'a' && mes[2] == 'r')
				{
					idade = 16;
				}
				else
				{
					if (mes[0] == 'A' && mes[1] == 'b')
					{
						idade = 16;
					}
					else
					{
						idade = 15;
					}
				}
			}
		}
	}
	if (idade >= 16)
	{
		printf("\n\nTendo %d anos isso significa que voc� pode votar!", idade);
	}
	else
	{
		printf("\n\nTendo %d anos isso significa que voc� n�o pode votar!", idade);
	}
}
