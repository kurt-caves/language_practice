#include <stdio.h>
#include <stdlib.h>

/*
2. Write a C program to implement a stack using a singly linked list.
Expected Output:

 Push data 1
 Push data 2
 Push data 3
 Push data 4

 Pop data: 4
 Pop data: 3
 Pop data: 2
 Pop data: 1

 Check a stack is empty or not?
 Stack is empty!
*/

struct Node {
    int value;
    struct Node *nextptr;
} *head;

void printList() {
    struct Node *temp;
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->nextptr;
    }
    printf("\n");

}



void createList(int n) {
    struct Node *tmp, *newNode;
    head = malloc(sizeof(struct Node));
    int value = 0;
    printf("Enter value for node 1 : ");
    scanf("%d", &value);
    head->value = value;
    head->nextptr = NULL;
    tmp = head;
    for(int i = 2; i <= n; i++) {
        newNode = malloc(sizeof(struct Node));
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        newNode->value = value;
        newNode->nextptr = NULL;

        tmp->nextptr = newNode;
        tmp = newNode;
    }
    

}

int main(void) {

    int n = 0;
    printf("Input the number of nodes (3 or more) : ");
    scanf("%d", &n);
    createList(n);
    printList();

    return 0;
}