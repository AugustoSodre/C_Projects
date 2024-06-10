#include <stdio.h>
#include <conio.h>

int main(void){
    const int N = 5;
    const int K = 30;
    char matriz[N][K];
    int posMaria = 0;
    for (int i = 0; i < N; i++){
            for (int j = 0; j < K; j++){
                matriz[i][j] = (char) getche();
                if (matriz[i][j] >= 97){
                    matriz[i][j] -= 32;
                } else if (matriz[i][j] == 13){
                    matriz[i][j] = '\0';
                    printf("\n");
                    break;
                }
            }
    }
    for (int i = 0; i < N; i++){
            for (int j = 0; j < K - 5; j++){
                if (matriz[i][j] == 77 && matriz[i][j+1] == 65 && matriz[i][j+2] == 82 && matriz[i][j+3] == 73 && matriz[i][j+4] == 65){
                    posMaria = i;
                }
            }
    }
    printf("Linha da Maria: %d", posMaria);
    return 0;
}
