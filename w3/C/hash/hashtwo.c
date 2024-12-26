#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2. Implement a basic hash table in C with functions for insertion, deletion, and retrieval of key-value pairs. Write a C program that extends the above basic hash table implementation to handle collisions using techniques such as chaining or open addressing.
*/

struct HashNode {
    int key;
    char value[50];
};

struct HashTable {
    int size;
    struct HashNode *bucket;
};

unsigned int hashFormula(int key) {
    int hashedKey = key % 10;
    return hashedKey;
}

struct HashNode *createNode(int key, char *value) {
    struct HashNode *newNode = malloc(sizeof(struct HashNode));
    newNode->key = key;
    strcpy(newNode->value, value);
    return newNode;
}

struct HashTable *createTable(struct HashTable *table, int size) {
    struct HashTable *newTable = malloc(sizeof(struct HashTable));
    newTable->size = size;
    newTable->bucket = calloc(size, sizeof(struct HashNode));
    return newTable;

}

int main(void) {

    struct HashTable *table = NULL;
    table = createTable(table, 10);

    // insert(table, 121, "Bob");

    return 0;
}