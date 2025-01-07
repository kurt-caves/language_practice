#include <stdio.h>

int main(void) {
    int val = 5;
    int *p = &val;
    printf("what is p?: %d\n", *p);
    int **q = &p;
    printf("what is p?: %d\n", **q);
}