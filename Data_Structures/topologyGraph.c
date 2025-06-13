#include <stdio.h>

#define TAMANHO 4


//Funcao que constroi o grafo
void construir(int grafo[TAMANHO][TAMANHO]){
    int i, j, adjacencia;

    //Inicializacao grafo
    for (i = 0; i < TAMANHO; i++){
        for (j = 0; j < TAMANHO; j++){
            grafo[i][j] = 0;
        }
    }

    //Construcao do grafo
    for (i = 0; i < TAMANHO; i++){
        for (j = 0; j < TAMANHO; j++){
            if (i == j){
                continue;
            }

            printf("Digite <1> se %d for adjacente a %d: ", i, j);
            scanf("%d", &adjacencia);
            grafo[i][j] = adjacencia;
        }
    }

}

//Funcao recursiva que descobre a ordenacao topologica do grafo
void ordenarTopologicoRecursivo(int grafo[TAMANHO][TAMANHO], int visitado[TAMANHO], int vertice){
    int i;
    visitado[vertice] = 1;

    for(int i = 0; i < TAMANHO; i++){
        if ( (grafo[vertice][i]) && (!visitado[i]) ){
            ordenarTopologicoRecursivo(grafo, visitado, i);
        }
    }

    printf("%d\t", vertice);
}


//Ordenacao topologica do grafo inicial, um bootstrap dos elementos do sistema
void ordenarTopologico(int grafo[TAMANHO][TAMANHO]){
    int vertice;
    int visitado[TAMANHO];

    for (vertice = 0; vertice < TAMANHO; vertice++){
        visitado[vertice] = 0;
    }

    for(vertice = 0; vertice < TAMANHO; vertice++){
        if (!visitado[vertice]){
            ordenarTopologicoRecursivo(grafo, visitado, vertice);
        }
    }

    printf("\n");
}

int main(){
    int grafo[TAMANHO][TAMANHO];

    construir(grafo);
    ordenarTopologico(grafo);

    return 0;
}