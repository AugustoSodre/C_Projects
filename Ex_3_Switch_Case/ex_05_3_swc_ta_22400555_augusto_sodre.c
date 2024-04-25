#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	float peso, altura;
	char sexo;
	setlocale(LC_ALL, "Portuguese");
	printf("Dê-me sua altura em cm: ");
	scanf("%f", &altura);
	printf("Dê-me seu sexo [m/f]: ");
	sexo = getche();
	switch (sexo){
		case 'm':
			peso = 52 + (0.75 * (altura - 152.4));
			printf("\nSeu peso ideal é: %.2f", peso);
			break;
		case 'f':
			peso = 52 + (0.67 * (altura - 152.4));
			printf("\nSeu peso ideal é %.2f", peso);
			break;
		default:
			printf("Esse sexo não existe!");
	}
	
}
