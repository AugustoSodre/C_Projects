#include <stdio.h>
#include <string.h>

int main(void){
    char strings[40];
    fgets(strings, 40, stdin);
    scanf("");
    printf("Type a character to search for: ");
    char character;
    scanf("%c", &character);

    for (int i = 0; i < strlen(strings); i++){
            if (strings[i] == character){
                printf("Found on index: %d\n", i);
            }
    }

    printf("Type a string to search for: ");
    char searchString[40];
    scanf("%s", &searchString);

    for (int i = 0; i < strlen(strings); i++){
            if (strcmp(strings[i], searchString) == 0){
                printf("Found on index: %d\n", i);
            }
    }

    return 0;
}
