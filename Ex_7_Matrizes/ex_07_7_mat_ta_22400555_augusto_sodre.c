#include <stdio.h>
#include <stdlib.h>

void main(){
    int matriz [4][5] = {{1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}, {11, 12, 13, 14, 15}, {10, 20, 30, 40, 50}};
    int vetorResultado [4];
    int maiorLinha = -10000;
    int posMaiorLinha = 0;
    //Cálculo do valor da linha e print juntos
    printf("\nMatriz:\n");
    for (int i = 0; i < 4; i++){
        int valorLinhaAtual = 0;
        for (int j = 0; j < 5; j++){
            valorLinhaAtual += matriz[i][j];
            printf("%4d\t", matriz[i][j]);
        }
        vetorResultado[i] = valorLinhaAtual;
        if (valorLinhaAtual >= maiorLinha){
            maiorLinha = valorLinhaAtual;
            posMaiorLinha = i;
        }
        printf("\n");
    }

    //Resultados
    printf("\nValores: \n");
    printf("Maior linha: %d \nValor: %4d\n", posMaiorLinha + 1, maiorLinha);
}
