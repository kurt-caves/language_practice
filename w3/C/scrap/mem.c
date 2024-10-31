#include <string.h>
#include <stdio.h>

// void *memset(void *ptr, int value, size_t num);
/* ptr: ptr to starting address of mem block
value: value to set in each byte
num: number of bytes to set
*/

/*
standard C lib function used to set all bytes in a block of memory to a specified value. Used to initialize or reset arrays, structures or other blocks of memory.
*/

int main() {
    int arr[10];
    memset(arr, 0, sizeof(arr));
    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

