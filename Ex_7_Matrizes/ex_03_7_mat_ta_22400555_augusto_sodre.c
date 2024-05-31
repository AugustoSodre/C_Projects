#include <stdio.h>
#include <stdlib.h>

void main(){
    int matriz1 [5][5];
    int matriz2 [5][5];
    int matriz3 [5][5];

    printf("\nDigite os valores da matriz 1:\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    system("cls");

    printf("\nDigite os valores da matriz 2:\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }

    system("cls");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d\t", matriz3[i][j]);
        }
        printf("\n");
    }

}
