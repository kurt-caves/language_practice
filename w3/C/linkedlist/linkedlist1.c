#include <stdio.h>
#include <stdlib.h>

/*
1. Write a program in C to create and display a Singly Linked List.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 6
Input data for node 3 : 7
Expected Output :

 Data entered in the list :                                                                                   
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7 
*/


struct node
{
    int num;
    struct node *nextptr; // address of the next node
} *stnode; // pointer to struct node

void createNodeList(int n) {
    struct node *fnNode, *tmp;
    int num, i;

    // allocate memory for first node
    stnode = malloc(sizeof(struct node));
    if(stnode == NULL) {
        printf("Memory allocation failed");
    }
    else {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL;
        // tmp is now the node
        tmp = stnode;

        for(i=2; i <=n; i++) {
            // allocate memory for each new node
            fnNode = malloc(sizeof(struct node));
            // Checking if memory allocation is successful
            if(fnNode == NULL) {
                printf(" Memory can not be allocated.");
                break;
            }
            else {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                fnNode->num = num;
                fnNode->nextptr = NULL;

                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }

    }
    }
}

void printList() {
    struct node *tmp;
    tmp = stnode;
    while(tmp != NULL) {
        printf("node data : %d\n", tmp->num);
        tmp = tmp->nextptr;
    }
}

int main(void) {
    int n = 0;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");

    // Inputting the number of nodes for the linked list
    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    // Creating the linked list with n nodes
    createNodeList(n);
    printList();
}






