#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	int num1, num2, operation;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &num1);
	printf("Insira outro n�mero inteiro: ");
	scanf("%d", &num2);
	printf("Qual opera��o deseja realizar entre os n�meros? \n1. Soma \n2. Subtra��o \n3. Multiplica��o \n4. Divis�o");
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
			printf("Essa opera��o n�o existe!");
	}
}
