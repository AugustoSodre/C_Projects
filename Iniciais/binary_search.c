#include <stdio.h>

int main(void){
    const int length = 7;
    int array[] = {1, 2, 128, 12, 3, 6, 19};
    int num;

    for (int i = 0; i < length; i++){
        for (int j = i + 1; j < length; j++){
            if (array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }

    printf("\nType a number to be searched: ");
    scanf("%d", &num);

    int highPos = length - 1;
    int lowPos = 0;
    int pos = -1;

    for (; lowPos <= highPos;){
        int midPos = (lowPos + highPos) / 2;
        int middleNum = array[midPos];

        if (middleNum == num){
            pos = midPos;
            break;
        } else if (num > middleNum){
            lowPos = midPos + 1;
        } else if (num < middleNum){
            highPos = midPos - 1;
        }

    }

    if (pos == -1){
        printf("\nElement is not in the array!\n");
        return 1;
    } else{
        printf("\nIndex position of the number: %d\n", pos);
        return 0;
    }
}

