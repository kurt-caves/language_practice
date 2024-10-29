#include <stdio.h>
#include <stdlib.h>

/*
6. Write a program in C to insert a node in the middle of a Singly Linked List.
Test Data and Expected Output :

Input the number of nodes (3 or more) : 4                                                                    
 Input data for node 1 : 1                                                                                    
 Input data for node 2 : 2                                                                                    
 Input data for node 3 : 3                                                                                    
 Input data for node 4 : 4                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data = 1                                                                                                     
 Data = 2                                                                                                     
 Data = 3                                                                                                     
 Data = 4                                                                                                     
                                                                                                              
 Input data to insert in the middle of the list : 5                                                           
 Input the position to insert new node : 3                                                                    
                                                                                                              
 Insertion completed successfully.                                                                             
                                                                                                              
 The new list are :                                                                                           
 Data = 1                                                                                                     
 Data = 2                                                                                                     
 Data = 5                                                                                                     
 Data = 3                                                                                                     
 Data = 4  
*/

struct node {
    int value;
    struct node *nextptr;
} *head;

void printList() {
    struct node *tmp;
    tmp = head;
    printf("Data entered in the list are : \n");
    while(tmp != NULL) {
        printf("Data = %d\n", tmp->value);
        tmp = tmp->nextptr;
    }
}

void createList(int n) {
    struct node *newNode, *tmp;
    int value = 0;
    head = malloc(sizeof(struct node));
    printf("Input data for node 1 : ");
    scanf("%d", &value);
    head->value = value;
    head->nextptr = NULL;
    tmp = head;
    for(int i = 2; i <= n; i++) {
        newNode = malloc(sizeof(struct node));
        printf("Input data for node %d : ", i);
        scanf("%d", &value);
        newNode->value = value;
        newNode->nextptr = NULL;
        tmp->nextptr = newNode;
        tmp = newNode;
    }
    
}

struct node* createNode(int value) {
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->value = value;
    newNode->nextptr = NULL;
    return newNode;
}

void insertAtPosition(int value, int pos) {
    struct node *tmp, *newNode, *prev;
    tmp = malloc(sizeof(struct node));
    tmp = head;
    prev = NULL;
    newNode = createNode(value);
    int i = 1;
    while(tmp != NULL) {
        if(i == pos) {
            printf("we are at position %d\n", i);
            prev->nextptr = newNode;
            newNode->nextptr = tmp;
        }
        i++;
        prev = tmp;
        tmp = tmp->nextptr;
    }
}

int main(void) {
    int n = 0;
    printf("Input the number of nodes (3 or more) : ");
    scanf("%d", &n);
    createList(n);
    printList();

    int newValue = 0;
    int position = 0;
    printf("Input data to insert in the middle of the list : ");
    scanf("%d", &newValue);
    printf("Input the position to insert new node : ");
    scanf("%d", &position);
    insertAtPosition(newValue, position);
    printList();
    
}