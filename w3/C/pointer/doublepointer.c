#include <stdio.h>

int main(void) {
    int val = 7;
    int *ptr = &val;
    int **dptr = &ptr;
    printf("here is the value of val: %d\n", val);
    printf("here is the ptr to val: %p\n", ptr);
    printf("here is ptr is dereferenced: %d\n", *ptr);
    printf("here is dptr: %p\n", dptr);
    printf("here is dptr dereferenced once: %p\n", *dptr);
    printf("here is dptr dereferenced twice: %d\n", **dptr);
}