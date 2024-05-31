#include <stdio.h>

void main(){
    int a[10], b[10];
    int c[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < 10; j++){
        scanf("%d", &b[j]);
    }

    int indexC = 0;
    for (int k = 0; k < 10; k++){
       if (a[k] == b[k]){
            c[indexC] = a[k];
            indexC++;
       }
    }

    for (int l = 0; l < 10; l++){
        printf(" %d ", c[l]);
    }

}
