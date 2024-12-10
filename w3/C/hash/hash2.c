#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2. Implement a basic hash table in C with functions for insertion, deletion, and retrieval of key-value pairs. Write a C program that extends the above basic hash table implementation to handle collisions using techniques such as chaining or open addressing.
*/

struct HashNode {
    int key;
    char value[50];
    struct HashNode *next;
};

struct HashTable {
    int capacity;
    int size;
    struct HashNode **bucket;
};

unsigned int hashFormula(int key) {
    int hashedKey = key % 10;
    return hashedKey;
}

struct HashNode *createNode(int key, char *value) {
    struct HashNode *newNode = malloc(sizeof(struct HashNode));
    newNode->key = key;
    // destination, source
    strcpy(newNode->value, value);
    newNode->next = NULL;
    return newNode;
}

struct HashTable *createTable(struct HashTable *table, int capacity) {
    struct HashTable *newTable = malloc(sizeof(struct HashTable));
    newTable->capacity = capacity;
    newTable->size = 0;
    newTable->bucket = malloc(sizeof(struct HashNode) * newTable->capacity);
    for(int i = 1; i < capacity; i++) {
        newTable->bucket[i] = NULL;
    }
    return newTable;
}

// need to care abou load factor: items in table/size of table
void insert(struct HashTable *table, int key, char *value) {
    struct HashNode *newNode = createNode(key, value);
    int hashedKey = hashFormula(key);
    int loadFactor;
    int index = hashedKey % table->capacity;
    int i = 1;
    if(table->bucket[hashedKey] != NULL) {
        struct HashNode *temp = table->bucket[index];
        while(temp != NULL) {
            
            if (temp->key == key) {
                // write over old key
                printf("here\n");
                table->bucket[hashedKey] = newNode;
            }
            // we have a collision
            if((temp->key % 10) == hashedKey) {
                printf("here\n");
                while(table->bucket[index] != NULL) {
                    index = i + index;
                    i++;
                }
                table->bucket[index] = newNode;
               
            }
            temp = temp->next;
        }
    }
    else {
       
        table->bucket[hashedKey] = newNode;
    }
}

void printTable(struct HashTable *table) {
    struct HashTable *temptable = table;
    for(int i = 1; i < table->capacity; i++) {
        struct HashNode *tempnode = table->bucket[i];
        if(tempnode != NULL)
            printf("value: %s, key: %d\n", tempnode->value, tempnode->key);
    }

}

int main(void) {

    struct HashTable *table = NULL;
    table = createTable(table, 10);

    insert(table, 121, "Bob");
    insert(table, 124, "Chris");
    insert(table, 224, "John");
    insert(table, 225, "Kurt" );
    insert(table, 225, "Art" );
    insert(table, 325, "Jennifer");
    insert(table, 226, "Derek");

    printTable(table);
    printf("\n");

    return 0;
}