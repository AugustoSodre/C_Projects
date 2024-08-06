#include <stdio.h>
#include <stdlib.h>

//Declaration of the node
struct node{
    int num;
    struct node *proximo;
};

//Function that inserts a node in the list
struct node *insert(struct node *head, int num){
    //Easy situation: The list is empty
    if (head == NULL){
        head = (struct node *) malloc(sizeof(struct node)); //Allocation on memory to the pointer in head
        head -> num = num; // -> the number the head points to is the one the function received as parameter
        head -> proximo = NULL; // the new number points to NULL

        return head;
    }
    //Hard situation: THe list is not empty;
    struct node *pointer = (struct node *) malloc(sizeof(struct node));
    pointer -> num = num; // Pointer
    pointer -> proximo = head; // Points to wherever the head is pointing to
    head = pointer; // Head points to the new node

    return head;

};

// Function to print the list
void imprimir(struct node *head){
    struct node *pointer = head;

    while (pointer != NULL){
        printf("%d\n", pointer -> num);
        pointer = pointer -> proximo;
    };
}


struct node *exclude(struct node *head, int num){
    //Easy situation: Empty List
    if (head == NULL){
        return NULL;
    };

    //Kinda Easy situation: First element, the one the head points to
    if (head -> num == num){
        struct node *pointer = NULL; //Temp pointer
        head = head -> proximo;
        free(pointer);

        return head;
    }

    //Mediazinha situation:
    struct node *pointer = head;
    while ((pointer -> proximo != NULL) && (pointer -> proximo -> num != num)){ //Ponteiro do próximo não é nulo (O próximo não é o último) ee o ponteiro do próximo número não é o que me deram de parâmetro na função, então estou no anterior
        pointer = pointer -> proximo;
    }
    if (pointer -> proximo -> num == num){
        struct node *exclude = pointer -> proximo;
        pointer -> proximo = pointer -> proximo -> proximo;
        free(exclude);
    }
    return head;
};


int main(){

    struct node *head = NULL;

    for ( int i = 0; i < 10; i++){
        head = insert(head, i);
    };

    for ( int i = 0; i < 10; i+=2){
        head = exclude(head, i);
    };

    imprimir(head);


    return 0;
}

