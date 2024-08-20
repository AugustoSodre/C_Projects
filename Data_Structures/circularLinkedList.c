#include <stdio.h>
#include <stdlib.h>

struct node{
    int numero;
    struct node *proximo;
};

struct node *inserir(struct node *head, int numero){
    struct node *novoNode = (struct node *) malloc(sizeof(struct node));
    novoNode -> numero = numero;
    novoNode -> proximo = NULL;

    //Caso facil: Lista vazia
    if (head == NULL){
        novoNode -> proximo = novoNode;
        return novoNode;
    };

    //Caso difícil: Lista não vazia (inserindo no final)
    struct node *ultimo = head;
    //Posicionando ponteiro
    while (ultimo -> proximo != head){
        ultimo = ultimo -> proximo;
    }
    ultimo -> proximo = novoNode;
    novoNode -> proximo = head;

    return head;

};

struct node *remover(struct node *head, int numero){
    //Caso fácil: Lista vazia
    if (head == NULL){
        return head;
    }

    //Caso médio: Remover primeiro elemento
    if (head -> numero == numero){
        if (head == head -> proximo){ //Se for unico elemento na lista
                free(head);
                return NULL;
        } else{ //Se tiver mais de um elemento na lista
            struct node *ultimo = head;
            while (ultimo -> proximo != head){
                ultimo = ultimo -> proximo;
            }
            struct node *remover = head;
            head = head -> proximo;
            ultimo -> proximo = head;
            free(remover);

            return head;
        }
    }

    //Caso difícil: Remover no meio ou final
    struct node *ponteiro = head;
    while ( (ponteiro -> proximo != head)&& (ponteiro -> proximo -> numero != numero) ){ //Direcionando ponteiro para o elemento anterior ao número desejado
        ponteiro = ponteiro -> proximo;
    }
    if (ponteiro -> proximo == head){ //Percorri a lista e não achei
        return head;
    }
    struct node *excluir = ponteiro -> proximo;
    ponteiro -> proximo = ponteiro -> proximo -> proximo;
    free(excluir);

    return head;

};

void imprimir (struct node *head){
    //Caso Muito Fácil: Lista Vazia
    if (head == NULL){
        return;
    }

    struct node *ponteiro = head;
    do{
        printf("%d\n", ponteiro -> numero);
        ponteiro = ponteiro -> proximo;
    } while (ponteiro != head);


}

int menu(){
    int resposta = 0;

    printf("--------------------\n");
    printf("        Menu        \n");
    printf("--------------------\n");
    printf("|  1 - Inserir     |\n");
    printf("|  2 - Remover     |\n");
    printf("|  3 - Imprimir    |\n");
    printf("|  4 - Sair        |\n");
    printf("--------------------\n");
    printf("Digite sua resposta: ");
    scanf("%d", &resposta);

    return resposta;
}

int main(){
    int resposta = 0;
    struct node *head = NULL;
    int num = 0;


    while (resposta != 4){
        switch (menu()){
        case 1:
            printf("Digite o numero a inserir: ");
            scanf("%d", &num);
            system("clear");
            head = inserir(head, num);
            break;
        case 2:
            printf("Digite o numero a remover: ");
            scanf("%d", &num);
            system("clear");
            head = remover(head, num);
            break;
        case 3:
            system("clear");
            imprimir(head);
            break;
        case 4:
            resposta = 4;
            break;
        default:
            printf("Numero errado, cabecinha!\n");
        }
    };


}
