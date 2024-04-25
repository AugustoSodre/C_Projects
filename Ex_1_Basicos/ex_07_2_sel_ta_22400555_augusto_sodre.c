#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void main(void)
{
	int senha_atual[] = {1, 2, 3};
	int senha_local[] = {0, 0, 0};
	int i, c;
	setlocale(LC_ALL, "Portuguese");
	printf("---------------------------");
	printf("\nGerenciador de senha!");
	printf("\nDê-me a senha secreta de 3 digitos: ");
	for (i = 0; i <= 2; i++)
	{
		senha_local[i] = getch() - 48;
		printf("*");
	}
	c = 0;
	for (i = 0; i <= 2; i++)
	{
		if (senha_local[i] == senha_atual[i])
		{
			c = c + 1;
		}
	}
	if (c == 3)
	{
		printf("\nAcesso liberado!");
	}
	else
	{
		printf("\nAcesso negado!");
	}
	
}
