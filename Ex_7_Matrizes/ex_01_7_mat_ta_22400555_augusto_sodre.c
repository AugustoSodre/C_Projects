#include <stdio.h>
#include <stdlib.h>

void main(){
    int matriz[3][4];
    printf("Insira os 12 numeros: \n");
    for (int i = 0; i < 3; i++){
            for (int j = 0; j < 4; j++){
                scanf("%d", &matriz[i][j]);
            }
    }

    system("cls");
    printf("\n Matriz:\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%4d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
