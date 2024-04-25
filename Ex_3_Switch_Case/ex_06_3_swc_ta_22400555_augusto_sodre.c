#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	int codigo = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira o código do produto: ");
	scanf("%d", &codigo);
	switch (codigo){
		case 1:
			printf("Alimento não perecível");
			break;
		case 2:
			printf("Alimento perecível");
			break;
		case 3:
			printf("Vestuário");
			break;
		case 4:
			printf("Limpeza");
			break;
		default:
			printf("Código não encontrado!");
	}
}
