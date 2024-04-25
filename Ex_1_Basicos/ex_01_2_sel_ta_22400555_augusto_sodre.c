#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int dia, ano, mes;
	char meses[10];
	printf("---------------------------");
	printf("\nCalculador de idade de voto\n");
	printf("\nApenas utilize números nas respostas!");
	printf("\nDia que você nasceu: ");
	scanf("%d", &dia);
	printf("\nMês que você nasceu: ");
	scanf("%d", &mes);
	printf("\nAno que você nasceu: ");
	scanf("%d", &ano);
	//Atribuicao dos meses
	switch (mes)
	{
		case 1:
			strncpy(meses, "Janeiro", 10);
		break;
		
		case 2:
			strncpy(meses, "Fevereiro", 10);
		break;
		
		case 3:
			strncpy(meses, "Março", 10);
		break;
		
		case 4:
			strncpy(meses, "Abril", 10);
		break;
		
		case 5:
			strncpy(meses, "Maio", 10);
		break;
		
		case 6:
			strncpy(meses, "Junho", 10);
		break;
		
		case 7:
			strncpy(meses, "Julho", 10);
		break;
		
		case 8:
			strncpy(meses, "Agosto", 10);
		break;
		
		case 9:
			strncpy(meses, "Setembro", 10);
		break;
		
		case 10:
			strncpy(meses, "Outubro", 10);
		break;
		
		case 11:
			strncpy(meses, "Novembro", 10);
		break;
		
		case 12:
			strncpy(meses, "Dezembro", 10);
		break;
	}
	printf("\nVocê nasceu no dia %d de %s de %d", dia, meses, ano);
	//Calculo da idade
	int idade = 2024 - ano;
	if (mes >= 5)
	{
		idade = idade - 1;
	}
	//Resultados
	if (idade >= 16)
	{
		printf("\n\nTendo %d anos isso significa que você pode votar!", idade);
	}
	else
	{
		printf("\n\nTendo %d anos isso significa que você não pode votar!", idade);
	}
}
