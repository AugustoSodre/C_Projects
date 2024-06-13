#include <stdio.h>
#include <stdlib.h>

void draw(int numHashes);

void main(void){
    draw(20);
}

void draw(int numHashes){
    if (numHashes > 0){
        printf("#");
        numHashes -= 1;
        draw(numHashes);
    } else{
        return;
    }


}
