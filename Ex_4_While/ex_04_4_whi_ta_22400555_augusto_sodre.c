#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int contador = 0;
	float media, soma = 0;
	float numAlunos = 4;
	while (contador < numAlunos){
		float notaLocal = 0;
		printf("Dê me a nota %d: ", contador+1);
		scanf("%f", &notaLocal);
		soma = soma + notaLocal;
		contador++;
	}
	media = soma/numAlunos;
	printf("Média: %.2f", media);
}
