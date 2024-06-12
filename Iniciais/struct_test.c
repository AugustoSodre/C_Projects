#include <stdio.h>

typedef struct{
        char name[20];
        int age;
        char id[5];
    } person;

int main(void){
    const int numPeople = 4;
    person people[numPeople];

    for (int i =0; i < numPeople; i++){
        printf("Type your name: ");
        scanf("%20s", &people[i].name);


        printf("Type your age: ");
        scanf("%d", &people[i].age);


        printf("Type your ID: ");
        scanf("");
        scanf("%5s", &people[i].id);

        while (getchar() != '\n');

        system("cls");
    }

    for (int i = 0; i < numPeople; i++){
        printf("\nName: %20s \tAge: %4d \tID: %5s", people[i].name, people[i].age, people[i].id);
    }

    return 0;
}
