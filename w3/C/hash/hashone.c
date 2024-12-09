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
    int capacity;
    int size;
    struct HashNode **buckets;
};



struct HashTable *createTable(int capacity) {
    struct HashTable *table = malloc(sizeof(struct HashTable));
    table-> size = 0;
    table->capacity = capacity;
    table->buckets = malloc(sizeof(struct HashNode) * table->capacity);
    for(int i = 0; i < capacity; i++) {
        table->buckets[i] = NULL;
    }
    return table;
}

struct HashNode *createNode(int key, char *value) {
    struct HashNode *newNode = malloc(sizeof(struct HashNode));
    newNode->key = key;
    strcpy(newNode->value, value);
    newNode->next = NULL;
    return newNode;
}

unsigned int computeHash(int key) {
    int hash = key % 10;
    return hash;
}

struct HashTable *insert(struct HashTable *table, int key, char *value) {
    struct HashNode *newNode = NULL;
    newNode = createNode(key, value);
    int hashedkey = computeHash(key);
    // printf("hashed key: %d\n", hashedkey);
    struct HashNode *temp = table->buckets[hashedkey];
    if(temp != NULL) {
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;

    }
    else {
        table->buckets[hashedkey] = newNode;
    }
    return table;
}

void printTable(struct HashTable *table) {
    printf("here\n");
    struct HashTable *temp = table;
    for(int i = 0; i < temp->capacity; i++) {
        struct HashNode *tempnode = temp->buckets[i];
        while(tempnode != NULL) {
            printf("key: %d, value: %s\n", tempnode->key, strdup(tempnode->value));
            tempnode = tempnode->next;
        }
    }
}

void print(struct HashTable *table) {
    printf("here\n");
    struct HashTable *temp = table;
    for(int i = 0; i < temp->capacity; i++) {
        struct HashNode *tempnode = temp->buckets[i];
        while(tempnode != NULL) {
            printf("key: %d, value: %s\n", tempnode->key, strdup(tempnode->value));
            tempnode = tempnode->next;
        }
    }
}

// Function to free the entire hash table
void freeTable(struct HashTable *table) {
    for(int i = 0; i < table->capacity; i++) {
        struct HashNode *temp = table->buckets[i];
        while(temp != NULL) {
            struct HashNode *toFree = temp;
            temp = temp->next;
            free(toFree);
        }
    }
    free(table->buckets);
    free(table);
}

char *retrieval(struct HashTable *table, int key) {
    int hashkey = computeHash(key);
    char *return_value;
    printf("%d\n", hashkey);
    struct HashNode *temp = table->buckets[hashkey];
    if(temp->next != NULL) {
        while(temp->key != key) {
            temp = temp->next;
        }
        return_value = temp->value;
    }
    else {
        return_value = temp->value;
    }
    return return_value;
}


int main(void) {

    struct HashTable *table = NULL;
    table = createTable(10);

    insert(table, 155, "Bob");
    
    insert(table, 455, "John");
   
    insert(table, 255, "Chris");
  
    insert(table, 355, "Kurt");

    insert(table, 123, "Smith");
    insert(table, 124, "Gramp");

    printTable(table);

    char *value = retrieval(table, 123);
    printf("value : %s\n", value);

    char *value2 = retrieval(table, 455);
    printf("value : %s\n", value2);

    char *value3 = retrieval(table, 155);
    printf("value : %s\n", value3);

    char *value4 = retrieval(table, 355);
    printf("value : %s\n", value4);



    freeTable(table);
    return 0;
}