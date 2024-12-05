#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int val) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node *insertNode(struct Node *root, int val) {
    if (root == NULL) {
        root = createNode(val);
    }
    else if (val < root->data) {
        root->left = insertNode(root->left, val);
    }
    else {
        root->right = insertNode(root->right, val);
    }
    return root; 
}

void inorderPrint(struct Node *root) {
    if (root != NULL) {
        inorderPrint(root->left);
        printf("%d ", root->data);
        inorderPrint(root->right);
    }
}

struct Node *mirror(struct Node *root) {
    if(root == NULL) {
        return NULL;
    }

    

    return root;

}

int main(void) {
    int val;
    char choice;
    struct Node *root = NULL;

    root = insertNode(root, 10);
    root = insertNode(root, 15);
    root = insertNode(root, 7);
    root = insertNode(root, 5);
    root = insertNode(root, 3);
    root = insertNode(root, 2);
    inorderPrint(root);
    printf("\n");

    // do {
    //     printf("enter value for node: ");
    //     scanf("%d", &val);
    //     root = insertNode(root, val);
    //     printf("continue? (y/n):");
    //     scanf(" %c", &choice);
    // } while (choice == 'y' || choice == 'Y');

    // inorderPrint(root);
    // printf("\n");
    
    struct Node *newroot = NULL;
    newroot = mirror(root);
    printf("print newroot:\n");
    inorderPrint(newroot);
    printf("\n");


    return 0;
}