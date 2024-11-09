#include <stdio.h>
#include <stdlib.h>

/*
3. Write a C program to check a stack is full or not using an array with push and pop operations.
Expected Output:

Stack size: 3
Original Stack: 1 2 3 
Push another value and check if the stack is full or not!
Stack is full!

Stack size: 3
Original Stack: 10 20 
Check the said stack is full or not!
Stack is not full!
*/

struct Stack {
    int top;
    int capacity;
    int *array;
};

struct Stack* initStack(int n) {
    struct Stack *stack = malloc(sizeof(struct Stack));
    stack->capacity = n;
    stack->top = -1;
    // cast pointer
    // reserve memory for number of items in list
    // multiply that by how big an int is on this computer
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(struct Stack *stack) {
    int result = 0;
    if(stack->capacity == (stack->top + 1)) {
        // printf("stack cap: %d stack top %d, result : %d\n", stack->capacity, stack->top, result);
        result = 1;
    }
    return result;
}

void push(struct Stack *stack, int element) {
    int check = isFull(stack);
    if(check == 1) {
        printf("Stack is full\n");
        printf("tried to push: %d\n\n", element);
        return;
    }
    stack->top++;
    stack->array[stack->top] = element;
    // stack->top = stack->array[stack->top];
}

void pop(struct Stack *stack) {
    int element = stack->array[stack->top];
    printf("popped element: %d\n\n", element);
    stack->top = stack->top - 1;
    stack->capacity = stack->capacity - 1;
}

void printStack(struct Stack *stack) {
    struct Stack *temp = stack;
    for(int i = 0; i < stack->capacity; i++) {
        printf("%d ", stack->array[i]);
    }
    printf("\n");
    printf("Top of stack: %d \n", stack->array[stack->top]);
}



int main(void) {
    int n = 0;
    printf("how many elements in stack : ");
    scanf("%d", &n);
    struct Stack *stack = initStack(n);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printStack(stack);
    push(stack, 40);
    printStack(stack);
    pop(stack);
    printStack(stack);
    return 0;
}