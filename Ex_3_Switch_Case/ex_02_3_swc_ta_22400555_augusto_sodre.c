#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void main(void){
	int answer = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Bem vindo ao Hotel California! \nServiços oferecidos: \n1. Fazer Check-in \n2. Chamar serviço de quarto \n3. Fazer pedido");
	printf("\nResposta: ");
	scanf("%d", &answer);
	switch (answer) {
		case 1:
			printf("Bem-vindo ao sistema de check-in! \nYou can check out any time you like... but you can never leave!");
			break;
		case 2:
			printf("Bem-vindo ao sistema de serviço de quarto! \nUm funcionário será disponibilizado em breve!");
			break;
		case 3:
			printf("Bem-vindo ao sistema de pedidos! \nSe quiser um vinho, bem, we haven't had that spirit here since... 1969!");
			break;
		default:
			printf("Cool wind in my hair! Não encontrei esse número!");
	}
	
}
