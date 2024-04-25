#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int contador = 0, entrada = 0, soma = 0;
	while (entrada != -1){
		printf("Digite um número: ");
		scanf("%d", &entrada);
		soma = soma + entrada;
		contador++;
	}
	soma = soma + 1;
	contador = contador - 1;
	printf("Quantidade de números: %d\n", contador);
	printf("Soma dos números: %d", soma);
}
