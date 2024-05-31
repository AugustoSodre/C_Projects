 #include <stdio.h>

 void main(){
    int a[10], b[20], c[30];

    for (int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    for (int i = 0; i < 20; i++){
        scanf("%d", &b[i]);
        int indexC = i + 10;
        c[indexC] = b[i];
    }

    for (int l; l < 30; l++){
        printf(" %d ", c[l]);
    }

}
