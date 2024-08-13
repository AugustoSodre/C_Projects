#include <stdio.h>
#include <stdlib.h>

//Node declaration
struct node {
    int numero;
    struct node *anterior;
    struct node *proximo;
};


//Insert Node
struct node *inserir(struct node *head, int numero){
    //New node declaration and memory allocation
    struct node *novoNode = (struct node *) malloc(sizeof(struct node));
    novoNode -> numero   = numero;
    novoNode -> anterior = NULL;
    novoNode -> proximo  = NULL;


    //Easy situation: Empty List
    if (head == NULL){
        head = novoNode;
        return head;
    }

    //Difficult situation: NOT Empty List
    struct node *ponteiro = head;

    //Directions to the last element
    while (ponteiro -> proximo != NULL){
        ponteiro = ponteiro -> proximo;
    }
    ponteiro -> proximo = novoNode;
    novoNode -> anterior = ponteiro;

    return head;
};


struct node *remover(struct node*head, int numero){
    //Easy Peasy Situation: The list is empty
    if (head == NULL){
        return NULL;
    }
    //Easy situation: First element
    if (head -> numero == numero){
        struct node *excluir = head;
        head = head -> proximo;
        if (head != NULL){
            head -> anterior = NULL;
        }
        free(excluir);

        return head;
    }

    //Hard situation: Last or in the middle element
    struct node *ponteiro = head;
    while ((ponteiro != NULL)&&(ponteiro -> numero != numero)){
            ponteiro = ponteiro -> proximo;
    }

    //Element not found
    if (ponteiro == NULL){
            return head;
    }
    ponteiro -> anterior -> proximo = ponteiro -> proximo;
    //If is NOT the last element, pointing to some other element
    if (ponteiro -> proximo != NULL){
            ponteiro -> proximo -> anterior = ponteiro -> anterior;
    }

    free(ponteiro);

    return head;
};

void imprimir (struct node *head){
    struct node *ponteiro = head;

    while (ponteiro != NULL){
        printf("%d\n", ponteiro -> numero);
        ponteiro = ponteiro -> proximo;
    }
}

int menu(){
    int resposta = 0;
    printf("\n\n\n===================\n");
    printf("Menu de opcoes\n");
    printf("===================\n");
    printf(" 1 - Inserir\n");
    printf(" 2 - Remover\n");
    printf(" 3 - Imprimir\n");
    printf(" 4 - Sair\n");
    printf("===================\n");
    printf("Digite a opcao: ");
    scanf("%d", &resposta);

    return resposta;
}

int main(){
    struct node *head = NULL;
    int opcao = 0;
    int numero = 0;

    while (opcao != 4){
        opcao = menu();
        switch (opcao){
            case 1:
               printf("Digite o numero: ");
               scanf("%d", &numero);
               head = inserir(head, numero);
               break;
            case 2:
                printf("Digite o numero: ");
                scanf("%d", &numero);
                head = remover(head, numero);
                break;
            case 3:
                imprimir(head);
                break;
        }
    }


}