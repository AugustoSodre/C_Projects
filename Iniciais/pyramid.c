#include <stdio.h>

int main(void){
    const int HEIGHT = 19;
    int numSpaces = (HEIGHT - 1);
    int numHashes = 1;
    for (int i = 0; i < HEIGHT; i++){
        for (int j = 0; j < numSpaces; j++){
            printf(" ");
        }
        numSpaces--;
        for (int k = 0; k < numHashes; k++){
            printf("#");
        }
        numHashes += 2;
        printf("\n");
    }

    return 0;
}
