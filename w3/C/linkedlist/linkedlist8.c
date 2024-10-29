#include <stdio.h>
#include <stdlib.h>

/*
8. Write a program in C to delete a node from the middle of a Singly Linked List.
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 5                                                                                    
 Input data for node 3 : 8                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data = 2                                                                                                     
 Data = 5                                                                                                     
 Data = 8                                                                                                     
                                                                                                              
 Input the position of node to delete : 2                                                                     
                                                                                                              
 Deletion completed successfully.                                                                             
                                                                                                              
 The new list are  :                                                                                          
 Data = 2                                                                                                     
 Data = 8  
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

void deleteNode(int pos) {
    struct node *tmp, *prev;
    tmp = malloc(sizeof(struct node));
    tmp = head;
    prev = NULL;
    int count = 1;
    while(tmp != NULL) {
        if(count == pos) {
            printf("current position : %d\n", count);
            prev->nextptr = tmp->nextptr;
            // tmp->nextptr = NULL;
            break;
        }
        count++;
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
    int pos = 0;
    printf("Enter postion to delete node :  ");
    scanf("%d", &pos);
    deleteNode(pos);
    printf("List after deletion :\n");
    printList();


}