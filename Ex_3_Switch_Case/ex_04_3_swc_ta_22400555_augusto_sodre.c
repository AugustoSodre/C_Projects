#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	int num1, num2, operation;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira um número inteiro: ");
	scanf("%d", &num1);
	printf("Insira outro número inteiro: ");
	scanf("%d", &num2);
	printf("Qual operação deseja realizar entre os números? \n1. Soma \n2. Subtração \n3. Multiplicação \n4. Divisão");
	printf("\nResposta: ");
	scanf("%d", &operation);
	switch (operation){
		case 1:
			printf("%d + %d = %d", num1, num2, (num1 + num2));
			break;
		case 2:
			printf("%d - %d = %d", num1, num2, (num1 - num2));
			break;
		case 3:
			printf("%d X %d = %d", num1, num2, (num1 * num2));
			break;
		case 4:
			printf("%d / %d = %d", num1, num2, (num1 / num2));
			break;
		default:
			printf("Essa operação não existe!");
	}
}
