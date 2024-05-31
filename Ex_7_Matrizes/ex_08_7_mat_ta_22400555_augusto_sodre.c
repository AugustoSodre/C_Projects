#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char matriz [25][15];

    printf("\nDigite os 25 nomes em min�sculo:\n");
    for (int i = 0; i < 25; i++){
        for (int j = 0; j < 15; j++){
                int num = getche();
                if (num != 13){ //Compara se � a tecla Enter
                        if(num >= 97){ //Compara se n�o � mai�sculo, pela ASCII
                            matriz[i][j] = (char)(num - 32);
                        } else{
                            matriz[i][j] = (char)num;
                        }
                } else { //Fechando a linha
                    matriz[i][j] = '\0';
                    printf("\n");
                    break;
                }
        }
    }

    system("cls");
    printf("Lista completa:\n");

    int posMaria = -1;
    for (int i = 0; i < 25; i++){
        printf("%s\n", matriz[i]);
        if (strcmp(matriz[i], "MARIA") == 0){ //Procura pela Maria! strcmp retorna zero!
            posMaria = i;
        }
    }

    if (posMaria != -1){
        printf("\nA maria est� na linha %d\n", posMaria + 1);
    } else {
        printf("\nMaria n�o est� na lista!\n");
    }


}

