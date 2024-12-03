#include <stdio.h>
#include <stdlib.h>

/*5. Write a C program that implements a deletion function for a binary tree. Allow users to delete nodes while maintaining the binary search tree structure.*/

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

struct Node *deletion(struct Node *root, int val, struct Node *parent) {
    if (root == NULL) return root;

    if (val < root->data) {
        deletion(root->left, val, root);
        
    }
    else if (val > root->data) {
        deletion(root->right, val, root);
    }
    else {
       if (val == root->data) {
        // leaf node
        if((root->left == NULL) && (root->right == NULL)) {
            if (parent->right != NULL) {
                parent->right = NULL;
            }
            else {
                parent->left = NULL;
            }
        }
        //Node has one child: If the node has a left child, point the parent to the left child. If it has a right child, point the parent to the right child.
        if ((root->left != NULL && root->right == NULL)) {
            parent->left = root->left;
            
        }
        if (root->left == NULL && root->right != NULL) {
            parent->right = root->right;
        }
        // node has two children Replace the node with its in-order successor (the smallest node in the right subtree) or in-order predecessor (the largest node in the left subtree).

        if (root->left != NULL && root->right != NULL) {
            printf("here1\n");
            if (parent && parent->data < root->data) {
                printf("here2\n");
                struct Node *temp;
                temp->data = root->right->data;
                temp->right = root->left;
                temp->left = NULL;
                parent->right = temp;
                root = NULL;
            }
            if (parent->data > root->data) {
                printf("here3\n");
                struct Node *temp;
                temp->data = root->right->data;
                temp->left = root->left;
                temp->right = NULL;
                parent->left = temp;
                root = NULL;
            }
        }
       }
    }

    return root;
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

    int delVal = 0;
    do {
        printf("enter value to delete: ");
        scanf("%d", &delVal);
        root = deletion(root, delVal, NULL);
        inOrderPrint(root);
        printf("\n");
        printf("continue? (y/n):");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    inOrderPrint(root);
    printf("\n");

    freeTree(root);


    return 0;
}