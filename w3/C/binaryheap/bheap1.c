#include <stdio.h>
#include <stdlib.h>

/*
1. Write a C program that implements the basic operations of a heap - insert, delete, and display.
*/

#define MAX_HEAP_SIZE 100

struct Heap {
    int arr[MAX_HEAP_SIZE];
    int size;
};

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapUp(struct Heap *heap, int index) {
    // need to get parent index i-1 / 2
    int parent = (index - 1) / 2;
    // while current index > 0 and
    // value at index > value at parent
    while(index > 0 && heap->arr[index] > heap->arr[parent]) {
        swap(&heap->arr[index], &heap->arr[parent]);
        index = parent;
        parent = ( index - 1) / 2;
    }

}

void display(struct Heap *heap) {
    struct Heap *temp = heap;
    int size = temp->size;

    for(int i = 0; i < temp->size; i++)
        printf("%d ", temp->arr[i]);
    printf("\n");
}

void insert(struct Heap *heap, int element) {
    heap->arr[heap->size] = element;
    heap->size++;
    heapUp(heap, heap->size - 1);
}

int main(void) {
    struct Heap heap;
    heap.size = 0;

    insert(&heap, 100);
    insert(&heap, 200);
    insert(&heap, 150);
    insert(&heap, 400);
    insert(&heap, 500);

    display(&heap);

    return 0;
}