#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    const int NUMOFCARDS = 4;
    int a = 0;
    bool changedA = false;
    int b = 0;
    bool changedB = false;
    int countA = 0;
    int countB = 0;

    for (int i = 0; i < NUMOFCARDS - 1; i++){
        int temp;
        //printf("Digite o número %d: ", i + 1);
        scanf("%d", &temp);

        //Finding which numbers are these
        if (temp != a){
            if (changedA == false){
                //Finding the first number
                a = temp;
                changedA = true;
            } else if (temp != b && changedB == false){
                //Finding the second number
                b = temp;
                changedB = true;
                printf("Novo B\n");
        } 
        }

        //Counting how many cards of each number
        if (temp == a){ 
            countA++;
        } else if (temp == b){
            countB++;
        }
        
    }
    
    //Deciding which number is the next one, based on the difference on the number of cards in the table
    if (countA > countB){
        printf("Próximo número será %d\n", b);
    } else {
        printf("Próximo número será %d\n", a);
    }
    
    return 0;
}