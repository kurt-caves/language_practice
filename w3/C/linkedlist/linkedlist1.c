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
    int value;
    struct node *next;
};

typedef struct node node_t;

node_t* create_node(int value) {
    node_t *new_node = malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

void connect_nodes(node_t **head, node_t *node) {
    node->next = *head;
    *head = node;

} 

void print(node_t *head) {
    node_t *tmp = head;
    while(tmp != NULL){
        printf("node: %d\n", tmp->value);
        tmp = tmp->next;
    }
}

int main(void) {
    
    node_t *head; // we have a pointer to a node_t
    node_t n1, n2, n3;
    int n = 0;
    printf("How many links do you want to make : ");
    scanf("%d", &n);
    int value = 0;
    // for(int i = 0; i < n; i++) {
    //     printf("Input data for node %d :", i);
    //     scanf("%d", &value);
        
    // }
    n1.value = 1;
    n2.value = 2;
    n3.value = 3;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    print(head);



    
}


