#include <stdio.h>
#include <stdlib.h>

// https://www.youtube.com/watch?v=VOpjAHCee7c&t=1s

struct node
{
    int value;
    struct node *next;
    

};
typedef struct node node_t;

void printList(node_t *head) {
    node_t *tmp = head;
    while(tmp != NULL) {
        printf("value at node = %d \n", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}

node_t *create_new_node(int value) {
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert) {
    node_to_insert->next = *head;
    *head = node_to_insert;
    // printf("Value of head: %p\n", head);
    return node_to_insert;
}

int main(void) {
    node_t *head = NULL;
    node_t *tmp;
   
    for(int i = 0; i < 25; i++) {
        tmp = create_new_node(i);
        insert_at_head(&head, tmp);
        // printf("Value of head2: %p\n", head);
        
    }
    
    // tmp = create_new_node(32);
    // head = tmp;
    // tmp = create_new_node(8);
    // tmp->next = head;
    // head = tmp;
    // tmp = create_new_node(34);
    // tmp->next = head;
    // head = tmp;


   

    printList(head);
}

