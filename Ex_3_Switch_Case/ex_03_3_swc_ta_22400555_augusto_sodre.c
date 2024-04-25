#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	int code = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira o código: ");
	scanf("%d", &code);
	switch (code){
		case 100:
			printf("Produto: Detergente \nValor unitário: R$1,59");
			break;
		case 101:
			printf("Produto: Esponja \nValor unitário: R$4,59");
			break;
		case 102:
			printf("Produto: Lã de aço \nValor unitário: R$1,79");
			break;
		default:
			printf("Produto não encontrado!");
	}
}
