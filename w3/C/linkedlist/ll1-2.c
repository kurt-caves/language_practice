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

struct node {
    int value;
    struct node *nextptr;
} *head;

void createList(int n) {
    struct node *nextNode, *tmp;
    int num = 0;
    head = malloc(sizeof(struct node));
    printf("What is the value for the first node : ");
    scanf("%d", &num);
    head->value = num;
    head->nextptr = NULL;
    tmp = head;
    for(int i = 2; i <= n; i++) {
        printf("Enter value for node %d : ", i);
        scanf("%d", &num);
        nextNode = malloc(sizeof(struct node));
        nextNode->value = num;
        nextNode->nextptr = NULL;

        tmp->nextptr = nextNode;
        tmp = nextNode;

    }
}

void printList() {
    struct node *tmp = head;
    while(tmp != NULL) {
        printf("node value : %d\n", tmp->value);
        tmp = tmp->nextptr;
    }
}

int main(void) {
    int n = 0;
    printf("Input the number of nodes : ");
    scanf("%d", &n);
    createList(n);
    printList();

}