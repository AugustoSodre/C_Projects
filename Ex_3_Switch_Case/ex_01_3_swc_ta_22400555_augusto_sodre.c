#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int day = 0;
	printf("D�-me um dia da semana de 1 a 7, sendo 1 Domingo e 7 S�bado: ");
	scanf("%d", &day);
	switch (day) {
		case 1:
			printf("Domingo!");
			break;
		case 2:
			printf("Segunda!");
			break;
		case 3:
			printf("Ter�a!");
			break;
		case 4:
			printf("Quarta!");
			break;
		case 5:
			printf("Quinta!");
			break;
		case 6:
			printf("Sexta!");
			break;
		case 7:
			printf("S�bado!");
			break;
		default:
			printf("Esse n�mero n�o tem hein!");
	
	}
}
