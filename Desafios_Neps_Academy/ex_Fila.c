#include <stdio.h>

void main(){
    int nElementos, pessoasEmbora;
    printf("Insira numero de elementos: ");
    scanf("%d", &nElementos);
    //Cria a lista e a preenche
    int lista[nElementos];
    printf("Digite os elementos: ");
    for (int i = 0; i < nElementos; i++){
        scanf("%d", &lista[i]);
    }
    /*Pega o número de pessoas que foi embora, as caracteriza e torna os espaços
    em que estavam vazios*/
    printf("Digite a quantidade de pessoas que foram embora: ");
    scanf("%d", &pessoasEmbora);
    printf("Digite quem foi embora: ");
    for (int j = 0; j < pessoasEmbora; j++){
        int emboraLocal;
        scanf("%d", &emboraLocal);
        for (int k = 0; k < nElementos; k++){
            if (lista[k] == emboraLocal){
                lista[k] = 0;
            }
        }
    }
    //Mostra na tela a lista atual
    printf("\n");
    printf("Lista final: ");
    for (int i = 0; i < nElementos; i++){
        if (lista[i] != 0){
            printf("%d ", lista[i]);
        }
    }
    printf("\n");

}
