#include <stdio.h>
#include <stdlib.h>

/*
4. Write a program in C to insert a new node at the beginning of a Singly Linked List.
Test Data and Expected Output :

 Input the number of nodes : 3                                                                                
 Input data for node 1 : 5                                                                                    
 Input data for node 2 : 6                                                                                    
 Input data for node 3 : 7                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7                                                                                                     
                                                                                                              
 Input data to insert at the beginning of the list : 4                                                        
                                                                                                              
 Data after inserted in the list are :                                                                        
 Data = 4                                                                                                     
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7  
*/

struct node {
    int value;
    struct node *nextptr;
} *head;

void printList() {
    struct node *tmp;
    // tmp = malloc(sizeof(struct node));
    tmp = head;
    while(tmp != NULL) {
        printf("Data = %d\n", tmp->value);
        tmp = tmp->nextptr;
    }
}

void createList(int n) {
    struct node *tmp, *newNode;
    int num = 0;
    head = malloc(sizeof(struct node));
    printf("Input data for node 1 : ");
    scanf("%d", &num);
    head->value = num;
    head->nextptr = NULL;
    tmp = head;

    for(int i = 2; i <=n; i++) {
        printf("Input data for node %d : ", i);
        scanf("%d", &num);
        newNode = malloc(sizeof(struct node));
        newNode->value = num;
        newNode->nextptr = NULL;

        tmp->nextptr = newNode;
        tmp = newNode;
    }
    
}

void reverseList() {
    struct node *current = head;
    struct node *following = head;
    struct node *prev = NULL;
    while(current != NULL) {
        following = following->nextptr;
        current->nextptr = prev;
        prev = current;
        current = following;
    }
    head = prev;
    printf("Reversed list: \n");
    printList();
}

struct node* insertAtHead(int n) {
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->value = n;
    newNode->nextptr = head;
    head = newNode;
    return newNode;
}

int main(void) {
    int n = 0;
    printf("Input the number of nodes : ");
    scanf("%d", &n);
    createList(n);
    printList();
    // reverseList();
    printf("Input data to insert at the beginning of the list : ");
    scanf("%d", &n);
    struct node *newList = malloc(sizeof(struct node));
    newList = insertAtHead(n);
    printList();
    // while(newList != NULL) {
    //     printf("new list node : %d\n", newList->value);
    //     newList = newList->nextptr;
    // }
    

}