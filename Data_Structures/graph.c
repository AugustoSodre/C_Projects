//Declaracao de bibliotecas
#include <stdio.h>

//Declaração de costantes
#define TAMANHO 5


//Funcao que cria o grafo
void construir(int grafo[TAMANHO][TAMANHO]){
    int i, j, adjacencia;

    //Inicialização da memória, fazendo a limpeza
    for (i = 0; i < TAMANHO; i++){
        for (j = 0; j < TAMANHO; j++){
            grafo[i][j] = 0;
        }
    }

    //Construcao
    for (i = 0; i < (TAMANHO - 1); i++){
        for (j  = (i + 1); j < TAMANHO; j++){
            printf("Digite <1> se %d for adjacente a %d: ", i, j);
            scanf("%d", &adjacencia);
            grafo[i][j] = adjacencia;
            grafo[j][i] = adjacencia;
        }
    }

}


//Funcao que imprime o grafo
void imprimir(int grafo[TAMANHO][TAMANHO]){
    printf("=================================\n");
    printf("Vertice\t\tVizinhanca\n");
    for(int i = 0; i < TAMANHO; i++){
        printf("%d\t\t", i);
        for(int j = 0; j <TAMANHO; j++){
            if (grafo[i][j]){
                printf("%d, ", j);
            }
        }
        printf("\n");
    }
    printf("=================================\n");
}

//Funcao que descobre o vertice mais popular
void descobrirMaiorGrau(int grafo[TAMANHO][TAMANHO]){
    int i, j, contador, vertice;
    int maiorGrau = 0;

    for (i = 0; i < TAMANHO; i++){
        contador = 0;
        for (j = 0; j < TAMANHO; j++){
            if (grafo[i][j] == 1){
                contador++;
            }
        }
        if (contador > maiorGrau){
            vertice = i;
            maiorGrau = contador;
        }
    }

    printf("O vertice mais popular e %d\n", vertice);
}


//Funcao principal do programa
int main(){
    int grafo[TAMANHO][TAMANHO];

    construir(grafo);
    imprimir(grafo);
    descobrirMaiorGrau(grafo);

    return 0;
}