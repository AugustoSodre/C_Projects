#include <stdio.h>
#include <stdlib.h>

#define MODULO 5

struct no {
    int numero;
    struct no *proximoNo;
};

struct diretor {
    int resto;
    struct no *proximoNo;
    struct diretor *proximoDiretor;
};

//Cria novo diretor
struct diretor *criarDiretor(struct diretor *cabeca, int resto){
    struct diretor *novoDiretor = (struct diretor *) malloc(sizeof(struct diretor));
    novoDiretor -> resto = resto;
    novoDiretor -> proximoNo = NULL;
    novoDiretor -> proximoDiretor = cabeca;
    return novoDiretor;
};

//Cria diretor correto
struct diretor *buscarDiretor(struct diretor *cabeca, int resto){
    struct diretor *ponteiroDiretor = cabeca;

    while ((ponteiroDiretor != NULL) && (ponteiroDiretor -> resto != resto)){
        ponteiroDiretor = ponteiroDiretor -> proximoDiretor;
    }

    return ponteiroDiretor;
};

//Insere um no na matriz esparsa
struct diretor *inserir(struct diretor *cabeca, int numero){
    // Procurar diretor
    struct diretor *ponteiroDiretor = buscarDiretor(cabeca, (numero % MODULO));

    if (ponteiroDiretor == NULL){
        cabeca = criarDiretor(cabeca, (numero % MODULO));
        ponteiroDiretor = cabeca;
    }

    //Insercao do no
    struct no *novoNo = (struct no *) malloc(sizeof(struct no));
    novoNo -> numero = numero;
    novoNo -> proximoNo = ponteiroDiretor -> proximoNo;
    ponteiroDiretor -> proximoNo = novoNo;

    return cabeca;

};


//Remover um no
void remover(struct diretor *cabeca, int numero){
    //Cenário Ridículo: matriz vazia
    if (cabeca == NULL){
        return;
    }

    //Procurar diretor
    struct diretor *ponteiroDiretor = buscarDiretor(cabeca, (numero % MODULO));

    //Cenario medio fácil: não encontrei o diretor
    if (ponteiroDiretor == NULL){
        return;
    }

    //Cenario facil: Lista do diretor encontrado vazia
    if (ponteiroDiretor -> proximoNo == NULL){
        return;
    }

    //Cenario medio: Excluir o primeiro no da lista
    if (ponteiroDiretor -> proximoNo -> numero == numero){
        struct no *excluir = ponteiroDiretor -> proximoNo;
        ponteiroDiretor -> proximoNo = ponteiroDiretor -> proximoNo -> proximoNo;

        free(excluir);
        return;
    }

    //Procurar o no a ser removido
    struct no *anterior = ponteiroDiretor -> proximoNo;
    while ( (anterior -> proximoNo != NULL) && (anterior -> proximoNo -> numero != numero)){
        anterior = anterior -> proximoNo;
    }

    //Cenario dificil: nao encontrei o numero na lista
    if (anterior -> proximoNo == NULL){
        return;
    }

    //Cenario dificil: excluir no meio ou no final
    struct no *excluir = anterior -> proximoNo;
    anterior -> proximoNo = anterior -> proximoNo -> proximoNo;
    free(excluir);

}

//Imprimir a matriz
void imprimir(struct diretor *cabeca){
    struct diretor *ponteiroDiretor = cabeca;
    while (ponteiroDiretor != NULL){
        printf("%d\t", ponteiroDiretor -> resto);
        struct no *ponteiroNo = ponteiroDiretor -> proximoNo;
        while (ponteiroNo != NULL){
                printf("%d, ", ponteiroNo -> numero);
                ponteiroNo = ponteiroNo -> proximoNo;
        }
        printf("\n");
        ponteiroDiretor = ponteiroDiretor -> proximoDiretor;
    }
}

int main(){

    struct diretor *matrizEsparsa = NULL;

    for (int i = 0; i < 100; i++){
        matrizEsparsa = inserir(matrizEsparsa, i);
    }

    imprimir(matrizEsparsa);

    printf("\n\n\n\n");

    for (int i = 0; i < 50; i++){
        remover(matrizEsparsa, i);
    }

    imprimir(matrizEsparsa);

    return 0;
}