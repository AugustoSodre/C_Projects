#include <stdio.h>

int main(){
    int length = 10;
    int array[length];
    int index[length];
    //Filling the array of numbers given by the user
    for (int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }

    //Filling the array of index positions with a -1 number (Flag)
    index[0] = -1;
    //Getting which number the user is searching for
    int searchNum;
    scanf("%d", &searchNum);
    //Searching for the number
    int contIndex = 0;
    for (int i = 0; i < length; i++){
        if (array[i] == searchNum){
            index[contIndex] = i;
            contIndex++;
        }
    }
    //Printing
    if (contIndex != 0 && index[0] != -1){
        printf("%d\n", contIndex);
        for (int i = 0; i < contIndex; i++){
            printf("%d ", index[i]);
        }
    }
    else {
        printf("Mia x");
    }

    return 0;
}
