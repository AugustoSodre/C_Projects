#include <stdio.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int lenLista, i, numSubsequencia, maiorProduto = 0;
	printf("Quantos números terá sua lista fixa: ");
	scanf("%d", &lenLista);
	int listaPredefinida[lenLista];
	for (i = 0; i < lenLista; i++){
		printf("Número %d: ", i+1);
		scanf("%d", &listaPredefinida[i]);
	}

	do{
		printf("Insira o comprimento da subsequência: ");
		scanf("%d", &numSubsequencia);
	} while (numSubsequencia <= 0 || numSubsequencia > lenLista);

	for (i = 0; i < lenLista-2; i++){
		if (listaPredefinida[i]*listaPredefinida[i+1]);
	}

}
