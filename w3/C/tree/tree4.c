#include <stdio.h>
#include <stdlib.h>

/*
4. Write a C program to calculate the height of a binary tree. Ensure the program handles empty trees gracefully.
*/

int Leftcount = 0;
int Rightcount = 0;

// struct
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// createnode
struct Node *createNode(int val) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// insert node
struct Node *insertNode(struct Node *root, int val) {
    // works for first node and for base case
    if(root == NULL) {
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

// inorder traversal
void inOrderPrint(struct Node *root) {
    if(root != NULL) {
        
        inOrderPrint(root->left);
        printf("%d ", root->data);
        inOrderPrint(root->right);
    }
}

void freeTree(struct Node *root) {
    if(root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int calcHeight(struct Node *root) {
    if(root->left != NULL) {
        calcHeight(root->left);
        Leftcount++;
    }
    if(root->right != NULL) {
        calcHeight(root->right);
        Rightcount++;
    }
    int max = 0;
    if(Leftcount > Rightcount) {
        max = Leftcount;
    }
    else {
        max = Rightcount;
    }
    return max;
}

int main(void) {
    int val = 0;
    char choice;
    struct Node *root = NULL;

    do {
        printf("enter value for node: ");
        scanf("%d", &val);
        root = insertNode(root, val);
        printf("continue? (y/n):");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    inOrderPrint(root);
    printf("\n");
    int height = calcHeight(root); 
    printf("height of tree: %d\n", height);
    freeTree(root);


    return 0;
}
