#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int num = 0;

    printf("\nMatriz: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%3d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite um número inteiro para multiplicar a matriz: ");
    scanf("%d", &num);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matriz[i][j] *= num;
        }
    }

    printf("\nMatriz Atualizada: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%3d\t", matriz[i][j]);
        }
        printf("\n");
    }

}
