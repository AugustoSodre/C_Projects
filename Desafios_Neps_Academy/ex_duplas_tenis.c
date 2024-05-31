#include <stdio.h>
#include <stdlib.h>

int main(void){
    int players [4];
    for (int i = 0; i < 4; i++){
        scanf("%d", &players[i]);
    }

    for (int i = 0; i < 4; i++){
        for (int j = i; j < 4; j++){
            int temp = 0;
            if (players[i] > players[j]){
                temp = players[j];
                players[j] = players[i];
                players[i] = temp;
            }
        }
    }

    int team1, team2, result;
    team1 = players[0] + players[3];
    team2 = players[1] + players[2];
    result = team1 - team2;
    printf("%d", result);
    return 0;
}
