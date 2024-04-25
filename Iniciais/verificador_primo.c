#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int i, num, contador = 0;
	double raizNum = 0.0;
	
	do{
		printf("\nD�-me um n�mero para verifica��o: ");
		scanf("%d", &num);
		if (num <= 0){
			printf("Esse n�mero n�o � valido!\n");
		}
	} while (num <= 0);
	
	if (num > 1){
		raizNum = sqrt(num);
		contador = 0;
	
		for (i = 2;i <= raizNum; i++){
			if (num%i == 0){
				contador += 1;
			}
		}
	
		if (contador == 0){
			printf("O n�mero %d � primo.", num);
		}
		else {
			printf("O n�mero %d n�o � primo.", num);
		}
	}
	else{
		printf("O n�mero %d n�o � primo.", num);
	}
}
