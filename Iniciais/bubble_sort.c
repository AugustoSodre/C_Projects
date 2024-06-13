#include <stdio.h>

int main(void){
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

    int high = size - 1;
    int low = 0;
    int pos = -1;
    for (int i = 0; i < size; i++){
        int mid = (high + low) / 2;
        if (array[mid] == num){
            pos = mid;
            printf("Index position: %d\n", pos);
            return 0;
        } else if (num > array[mid]){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (pos == -1){
        printf("Element not found\n");
        return 1;
    }


}
