#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *items; // pointer to array of int's
    size_t count; // size_t is use to represent sizes and counts it's unsigned, num of elements
    size_t capacity; // space allocated for the array
} Numbers;

#define da_append(xs, x)\
    do {\
        if(xs.count >= xs.capacity) {\
            if(xs.capacity == 0) xs.capacity = 256;\ 
            else xs.capacity *= 2;\ 
            xs.items = realloc(xs.items, xs.capacity*sizeof(xs.items));\ 
        }\
        xs.items[xs.count++] = x;\
    }\
    while(0)

int main(void) {
    Numbers xs = {0}; // init all nums to 0
    // add nums 0 - 9 to array
    for (int x = 0; x < 10; ++x) da_append(xs, x); // dynamic array part of the code
    for(size_t i = 0; i < xs.count; ++i) printf("%d\n", xs.items[i]);
    return 0;
}