#include <stdio.h>
#include <stdlib.h>

void main(){
    int matriz [3][4];

    printf("Digite os 12 numeros:\n");
    for (int j = 0; j < 4; j++){
        for (int i = 0; i < 3; i++){
            scanf("%d", &matriz[i][j]);
        }
    }

    system("cls");
    printf("\nMatriz:\n");
    for (int i =0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%4d \t", matriz[i][j]);
        }
        printf("\n");
    }
}
