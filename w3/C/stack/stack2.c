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
}; 

void printList(struct Node **head) {
    struct Node *temp = *head;
    while(temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->nextptr;
    }
    printf("\n");
}

// handle memory allocation here
void push(struct Node **head, int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->nextptr = *head;
    *head = newNode;

}

void pop(struct Node **head) {
    if(*head == NULL) {
        printf("STACK IS EMPTY\n");
        return;
    }
    struct Node *temp, *prev;
    
    temp = *head;
    if(temp->nextptr == NULL) {
        temp->nextptr = NULL;
        *head = NULL;
        return;
    }
    prev = NULL;
    while(temp != NULL) {
        if(prev != NULL) {
            prev->nextptr = NULL;
            *head = temp;
            break;

        }
        prev = temp;
        temp = temp->nextptr;
    }
    printf("\n");
}



int main(void) {
    struct Node *head = NULL;
    printf("Push data 1\n");
    push(&head, 1);
    printf("Push data 2\n");
    push(&head, 2);
    printf("Push data 3\n");
    push(&head, 3);
    printf("Push data 4\n");
    push(&head, 4);
    printList(&head);
    // printf("head value : %d\n", head->value);

    pop(&head);
    printf("Pop top element\n");
    printList(&head);
    pop(&head);
    printf("Pop top element\n");
    printList(&head);
    pop(&head);
    printf("Pop top element\n");
    printList(&head);
    pop(&head);
    printf("Pop top element\n");
    printList(&head);
    pop(&head);
    printf("Pop top element\n");
    // printList(&head);
    
    



    return 0;
}