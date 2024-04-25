#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int answer = 0, sum = 0;
	do{
		printf("Dê-me um número: ");
		scanf("%d", &answer);
		sum = sum + answer;
	} while (answer >= 0);
	sum = sum + 1;
	printf("Soma dos elementos: %d", sum);
}
