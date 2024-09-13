#include <stdio.h>

/*
Write a program in C to insert the values in the array (sorted list).
Test Data :
Input number of elements you want to insert (max 100): 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 3
element - 2 : 4
element - 3 : 7
element - 4 : 8
Input the value to be inserted : 5
The existing array list is :
2 3 4 7 8
After Insert the list is :
2 3 4 5 7 8
*/

void shift(int n, int new, int arr[]) {
    int newLength = n +1;
    int newArr[newLength];
    for(int i = 0; i < newLength; i++) {
        newArr[i] = arr[i];
    }
    for(int i = newLength - 1; i >= 0; i--) {
        /*
        shift what is at (i-1) to i
        stop at point where "new" is less than i
        */
       printf("%d ", newArr[i]);
    }
}

int main() {
    int n = 0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }
    printf("Input 5 elements in the array :\n");
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", arr[i]);
        scanf("%d", &arr[i]);
    }
    printf("Input the value to be inserted : ");
    int new = 0;
    scanf("%d", &new);
    shift(n, new, arr);
}