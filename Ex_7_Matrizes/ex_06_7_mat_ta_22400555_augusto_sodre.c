#include <stdio.h>
#include <stdlib.h>

void main(){
    int matriz [4][5] = {{1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}, {11, 12, 13, 14, 15}, {18, 20, 35, 45, 68}};
    float vetorResultado [4];
    //Cálculo do valor da linha e print juntos
    printf("\nMatriz:\n");
    for (int i = 0; i < 4; i++){
        int valorLinhaAtual = 0;
        for (int j = 0; j < 5; j++){
            valorLinhaAtual += matriz[i][j];
            printf("%4d\t", matriz[i][j]);
        }
        //Cálculo da média
        vetorResultado[i] = valorLinhaAtual / 5.0;
        printf("\n");
    }

    //Resultados
    printf("\nMedia dos valores: \n");
    int valorTotal = 0;
    for (int i = 0; i < 4; i++){
        printf("Linha %d: %4.2f\n", i+1, vetorResultado[i]);
        valorTotal += vetorResultado[i];
    }
}
