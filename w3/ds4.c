#include <stdio.h>
#include <stdlib.h>

/*
Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3

Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/
int* reverse(int n, int arr[]) {
    // allocates memory for n integers
    // casts the allocated memory to int
    // assigns the pointer to newArr
    int *newArr = malloc( n * sizeof *newArr);
    for(int i = 0; i < n; i++) {
        for(int j = n - 1; j >= 0; j--) {
            newArr[i] = arr[j];
            i++;
        }
    }
    return newArr;
}

int *copy(int n, int arr[]) {
    // int *p3 = malloc(4*sizeof *p3);
    int *newArr = malloc( n * sizeof *newArr);
    for(int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }

    return newArr;
}

int main() {
    int n = 0;
    printf("Input the number of elements to be stroed in the array : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }
    printf("Input %d elements in the array :\n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", arr[i]);
        scanf("%d", &arr[i]);
    }
    printf("The elements stored in the first array are : \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int *newArr = copy(n, arr);
    printf("The elements copied into the second array are :");
    for(int i = 0; i < n; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");
    free(newArr);
    return 0;

}