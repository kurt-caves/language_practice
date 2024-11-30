#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node *insertNode(struct Node *node, int val) {
    if (node == NULL) {
        node = createNode(val);
    }
    else if(val < node->data) {
        node->left = insertNode(node->left, val); 
    }
    else if (val > node->data) {
        node->right = insertNode(node->right, val);
    }
    
    return node;
}

void inOrderPrint(struct Node *root) {
    if (root != NULL) {
        inOrderPrint(root->left);
        printf("%d ", root->data);
        inOrderPrint(root->right);
    }
}


int main() {
    struct Node *root =  NULL;
    int val;
    char choice;
    do {
        printf("Input value to insert into binary tree: ");
        scanf("%d", &val);
        root = insertNode(root, val);
        printf("Want to insert another node? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nhere is the tree: \n");
    inOrderPrint(root);
    printf("\n");

    free(root);

    return 0;
}