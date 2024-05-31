#include <stdio.h>
#include <stdlib.h>

void main(){
    int matriz [4][5] = {{1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}, {11, 12, 13, 14, 15}, {10, 20, 30, 40, 50}};
    int vetorResultado [5];

    //Calculando o valor da coluna
    for (int j = 0; j < 5; j++){
            int valorColunaAtual = 0;
        for (int i = 0; i < 4; i++){
            valorColunaAtual += matriz[i][j];
        }
        vetorResultado[j] = valorColunaAtual;
    }

    //Output da Matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            printf("%4d\t", matriz[i][j]);
        }
        printf("\n");
    }

    //Resultados
    printf("\nValores: \n");
    int valorTotal = 0;
    for (int i = 0; i < 5; i++){
        printf("Coluna %d: %4d\n", i+1, vetorResultado[i]);
        valorTotal += vetorResultado[i];
    }
    printf("\nTotal da matriz: %d\n", valorTotal);
}
