#include <stdio.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int lenLista, i, numSubsequencia, maiorProduto = 0;
	printf("Quantos n�meros ter� sua lista fixa: ");
	scanf("%d", &lenLista);
	int listaPredefinida[lenLista];
	for (i = 0; i < lenLista; i++){
		printf("N�mero %d: ", i+1);
		scanf("%d", &listaPredefinida[i]);
	}

	do{
		printf("Insira o comprimento da subsequ�ncia: ");
		scanf("%d", &numSubsequencia);
	} while (numSubsequencia <= 0 || numSubsequencia > lenLista);

	for (i = 0; i < lenLista-2; i++){
		if (listaPredefinida[i]*listaPredefinida[i+1]);
	}

}
