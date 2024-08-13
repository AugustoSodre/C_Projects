#include <stdio.h>

int main(void){
    //Bubble Sort
    const int size = 7;
    int array[] = {12, 2, 25, 7, 128, 65, 1};
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - i; j++){
            if (array[j] > array[j+1]){
                int numTemp = array[j+1];
                array[j+1] = array[j];
                array[j] = numTemp;
            }
        }
    }

    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }

    int num;
    printf("\nGive me a number: ");
    scanf("%d", &num);
}
