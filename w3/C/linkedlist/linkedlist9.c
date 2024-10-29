#include <stdio.h>
#include <stdlib.h>

/*
9. Write a program in C to delete the last node of a Singly Linked List.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 1
Input data for node 2 : 2
Input data for node 3 : 3
Expected Output :

 Data entered in the list are :                                                                               
 Data = 1                                                                                                     
 Data = 2                                                                                                     
 Data = 3                                                                                                     
                                                                                                              
 The new list after deletion the last node are  :                                                             
 Data = 1                                                                                                     
 Data = 2 
*/

struct node {
    int value;
    struct node *nextptr;
} *head;

struct node* createNode(int value) {
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->value = value;
    newNode->nextptr = NULL;
    return newNode;
}

void createList(int n) {
    struct node *tmp, *newNode;
    head = malloc(sizeof(struct node));
    int value = 0;
    printf("Input data for node 1 : ");
    scanf("%d", &value);
    head->value = value;
    head->nextptr = NULL;
    tmp = head;
    for(int i = 2; i <= n; i++) {
        printf("Input data for node %d : ", i);
        scanf("%d", &value);
        newNode = createNode(value);
        tmp->nextptr = newNode;
        tmp = newNode;
    }

}

void printList() {
    struct node *tmp;
    tmp = head;
    while(tmp != NULL) {
        printf("Data = %d\n",tmp->value);
        tmp = tmp->nextptr;
    }
}



int main(void) {
    int n = 0;
    printf("Input the number of nodes (3 or more) : ");
    scanf("%d", &n);
    createList(n);
    printList();


}