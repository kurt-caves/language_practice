#include <stdio.h>
#include <stdlib.h>

/*
7. Write a C program that extends the binary tree program to perform a level-order traversal. Print the nodes at each level from top to bottom.
*/

int Leftcount = 0;
int Rightcount = 0;

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

int calcHeight(struct Node *root) {
    if (root == NULL)
        return 0;
    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);

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

    printf("height of tree is : %d\n", calcHeight(root));
    int height = calcHeight(root);

    return 0;
}