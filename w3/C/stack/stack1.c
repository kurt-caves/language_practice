#include <stdio.h>
#include <stdlib.h>

/*1. Write a C program to implement a stack using an array with push and pop operations.
Expected Output:

Elements in the stack are: 3 5 4 3 2 1 */


//  int newArr[arrLength+1]; would be considered local which is stored on the stack, need to put the array on the heap
int* pushedArray(int *arr, int value, int arrLength) {
    // 
    int *newArr = malloc((arrLength + 1) * sizeof(int));
    for(int i = 0; i < arrLength; i++) {
        newArr[i] = arr[i];
    }
    newArr[arrLength] = value;
    return newArr;
}

int* poppedArray(int *arr, int arrLength) {
    int *newArr = malloc((arrLength - 1) *sizeof(int));
    printf("length of param array: %d\n", arrLength);
    for(int i = 0; i < arrLength - 1; i++) {
        newArr[i] = arr[i];
    }

    return newArr;
}

int main(void) {
    // push once
    // --------------------------------------------------------
    int arr[] = {3, 5, 4, 3, 2, 1};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int valToPush = 9;
    int *newArray = pushedArray(arr, valToPush, arrLength);
    int newLength = 0;
    for(int i = 0; i < arrLength + 1; i++) {
        printf("%d ", newArray[i]);
        newLength++;
    }
    printf("\n");
    // --------------------------------------------------------

    // push twice
    // --------------------------------------------------------
    int valToPush2 = 9;
    int *newArray2 = pushedArray(newArray, valToPush2, newLength);
    for(int i = 0; i < newLength + 1; i++) {
        printf("%d ", newArray2[i]);
    }
    printf("\n");
    // --------------------------------------------------------

    // pop last element
    // --------------------------------------------------------
    int *poppedarray = poppedArray(newArray2, newLength + 1);
    // --------------------------------------------------------
    printf("poped array : \n");
    for(int i = 0; i < newLength; i++) {
        printf("%d ", poppedarray[i]);
    }
    printf("\n");
    // --------------------------------------------------------

    return 0;
}