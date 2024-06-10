#include <stdio.h>

int main(){
    int k;
    int length;
    scanf("%d", &length);
    int casas[length];
    int num1, num2;
    //Filling loop
    for (int i = 0; i < length; i++){
        scanf("%d", &casas[i]);
    }
    scanf("%d", &k);
    //Verification loop
    for (int i = 0; i < length - 1; i++){
            for (int j = 1; j < length; j++){
                    if (casas[i] + casas[j] == k){
                        num1 = casas[i];
                        num2 = casas[j];
                        printf("%d %d", num1, num2);
                        return 0;
                    }
            }
    }
}
