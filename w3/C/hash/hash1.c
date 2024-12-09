#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. Write a C program that implements a basic hash table with functions for insertion, deletion, and retrieval of key-value pairs.
*/

struct HashNode {
    int key;
    char value[50];
    struct HashNode *next;
};

struct HashTable {
    struct HashNode **buckets; // hold the address of another pointer
    int capacity; // num buckets
    int size;   // current num of K,V pairs
};

// create table
struct HashTable *createTable(int capacity) {
    struct HashTable *table = malloc(sizeof( struct HashTable));
    table-> capacity = capacity;
    table->size = 0;
    table->buckets = malloc(sizeof(struct HashNode)* table->capacity);
    for (int i = 0; i < capacity - 1; i++) {
        table->buckets[i] = NULL;
    }

    return table;
}

// return an unsigned int becauase we cant have 
// negative elements in an array
unsigned int hashFunction(int key, int capacity) {
    unsigned int hash = key % 10;
    return hash;
}

struct HashNode *createNode(int key, char *value) {
    struct HashNode *newNode = malloc(sizeof(struct HashNode));
    newNode->key = key;
    strcpy(newNode->value, value);
    newNode->next = NULL;
    return newNode;
}

struct HashTable *insert(struct HashTable *table, int key, char *value) {
    if (table == NULL) {
        printf("table is null\n");
        return NULL;
    }
    struct HashNode *newNode = NULL;
    newNode = createNode(key, value);
    int hashedKey = hashFunction(key, table->capacity);
    
    struct HashNode *temp = table->buckets[hashedKey];
    if(temp != NULL) {
        printf("first stop\n");
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
            
    }
    else {
        table->buckets[hashedKey] = newNode;
    }

    return table;
}

void printTable(struct HashTable *table) {
    struct HashTable *temp = table;
    for(int i = 0; i < temp->capacity; i++) {
        struct HashNode *tempnode = temp->buckets[i];
        while(tempnode != NULL) {
            printf("key: %d, value: %s\n", tempnode->key, strdup(tempnode->value));
            tempnode = tempnode->next;
        }
           
  
        
    }

}


// delete
// lookup



int main(void) {

    struct HashTable *table = NULL;
    int tableCap = 5;
    table = createTable(10);

    insert(table, 155, "Bob");
    
    insert(table, 155, "John");
   
    insert(table, 155, "Chris");
  
    insert(table, 155, "Kurt");

    insert(table, 123, "Smith");
    insert(table, 124, "Gramp");

    printTable(table);
   

    return 0;
}