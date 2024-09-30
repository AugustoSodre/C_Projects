#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> // for srand and time

// Node Declaration
struct node {
    int number;
    struct node *son1;
    struct node *son2;
    struct node *son3;
    struct node *son4;
    struct node *son5;
};

// Inserting a node in the Tree
struct node *insert(struct node *root, int number, int depth, int max_depth) {
    // Stop recursion if max depth is reached
    if (depth >= max_depth) {
        return root;
    }

    // Easy situation: Empty Tree
    if (root == NULL) {
        root = (struct node *) malloc(sizeof(struct node));
        if (root == NULL) {  // Check if malloc succeeded
            printf("Memory allocation failed\n");
            exit(1);  // Exit on memory allocation failure
        }
        root->number = number;
        root->son1 = NULL;
        root->son2 = NULL;
        root->son3 = NULL;
        root->son4 = NULL;
        root->son5 = NULL;
    }

    // Difficult situation: Not Empty Tree
    int sort = (1 + (rand() % 5));

    // Increment depth for each recursion step
    switch (sort) {
    case 1:
        root->son1 = insert(root->son1, number, depth + 1, max_depth);
        break;
    case 2:
        root->son2 = insert(root->son2, number, depth + 1, max_depth);
        break;
    case 3:
        root->son3 = insert(root->son3, number, depth + 1, max_depth);
        break;
    case 4:
        root->son4 = insert(root->son4, number, depth + 1, max_depth);
        break;
    case 5:
        root->son5 = insert(root->son5, number, depth + 1, max_depth);
        break;
    default:
        break;
    }

    return root;
}

// Navigation through the tree
void navigate(struct node *root, int indentation, char *son) {
    if (root == NULL) {  // Correct comparison
        return;
    }

    // Printing the nodes according to the hierarchy
    for (int i = 0; i < indentation; i++) {
        printf("-");
    }
    printf("%d %s\n", root->number, son);

    indentation += 3;
    navigate(root->son1, indentation, " (Son 1) ");
    navigate(root->son2, indentation, " (Son 2) ");
    navigate(root->son3, indentation, " (Son 3) ");
    navigate(root->son4, indentation, " (Son 4) ");
    navigate(root->son5, indentation, " (Son 5) ");
}

// Main function to execute the program
int main(int argc, char const *argv[]) {
    srand(time(NULL)); // Seed the random number generator
    
    struct node *tree = NULL;
    int max_depth = 4;  // Limit the depth of the tree

    for (int i = 0; i < 4; i++) {  // Reduced number of nodes for testing
        tree = insert(tree, i, 0, max_depth);  // Start at depth 0
    }

    navigate(tree, 0, "Root");

    return 0;
}
