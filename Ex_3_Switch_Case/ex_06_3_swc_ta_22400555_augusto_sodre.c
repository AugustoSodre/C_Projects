#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	int codigo = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira o c�digo do produto: ");
	scanf("%d", &codigo);
	switch (codigo){
		case 1:
			printf("Alimento n�o perec�vel");
			break;
		case 2:
			printf("Alimento perec�vel");
			break;
		case 3:
			printf("Vestu�rio");
			break;
		case 4:
			printf("Limpeza");
			break;
		default:
			printf("C�digo n�o encontrado!");
	}
}
