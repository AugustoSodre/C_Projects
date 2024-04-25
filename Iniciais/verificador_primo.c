#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int i, num, contador = 0;
	double raizNum = 0.0;
	
	do{
		printf("\nDê-me um número para verificação: ");
		scanf("%d", &num);
		if (num <= 0){
			printf("Esse número não é valido!\n");
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
			printf("O número %d é primo.", num);
		}
		else {
			printf("O número %d não é primo.", num);
		}
	}
	else{
		printf("O número %d não é primo.", num);
	}
}
