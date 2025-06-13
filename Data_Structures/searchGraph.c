//Programa que implementa percursos em grafos


//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Constantes
#define QTDVERTICES 4


//Funcao que constroi um grafo
void construir(int grafo[QTDVERTICES][QTDVERTICES], int aleatorio){
    int adjacencia;

    //Inicializacao do grafo
    for (int i = 0; i < QTDVERTICES; i++){
        for(int j = 0; j < QTDVERTICES; j++){
            grafo[i][j] = 0;
        }
    }

    //Construcao do grafo
    for(int i = 0; i < (QTDVERTICES - 1); i++){
        for(int j = (i + 1); j < QTDVERTICES; j++){
            if (aleatorio){
                adjacencia = (((rand() % 5) == 1) ? 1 : 0);
            }
            else{
                printf("Digite <1> se %d for adjacente a %d: ", i, j);
                scanf("%d", &adjacencia);
            }

            grafo[i][j] = adjacencia;
            grafo[j][i] = adjacencia;
        }
    }

}


//Funcao que procura um percurso em um grafo usando recursividade

int procurarPercursoRecursivo(int grafo[QTDVERTICES][QTDVERTICES], int visitado[QTDVERTICES], int inicio, int fim){
    int retorno = 0;

    if (inicio == fim){
            return 1;
    }

    visitado[inicio] = 1;
    for(int vizinho = 0; vizinho < QTDVERTICES; vizinho++){
        if ((grafo[inicio][vizinho]) && (! visitado[vizinho])){
            if (procurarPercursoRecursivo(grafo, visitado, vizinho, fim)){
                retorno = 1;
                printf("%d <- ", vizinho);
                break;
            }
        }

    }

    return retorno;
}

//Funcao que inicializa a procura um caminho em um grafo

void procurarPercurso(int grafo[QTDVERTICES][QTDVERTICES], int inicio, int fim){

    int visitado[QTDVERTICES];

    //Limpando o array de vertices visitados
    for (int i = 0; i < QTDVERTICES; i++){
        visitado[i] = 0;
    }

    (procurarPercursoRecursivo(grafo, visitado, inicio, fim)) ? printf("%d\n", inicio): printf("Não tem caminho entre os vertices lol");

}

//Função Principal
int main(){

    //Declaracao de variaveis
    int inicio, fim;
    int grafo[5][5];

    //Inicializacao da aleatoriedade
    time_t t;
    srand(time(&t));

    //Construcao do grafo
    construir(grafo, 0);

    //Descoberta de caminhos
    while(1){
        printf("Digite o vertice inicial: ");
        scanf("%d", &inicio);

        printf("Digite o vertice final: ");
        scanf("%d", &fim);

        procurarPercurso(grafo, inicio, fim);
    }


    return 0;
}