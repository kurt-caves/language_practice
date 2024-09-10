#include <stdio.h>
#include <stdlib.h>
/*
Write a program in C to merge two arrays of the same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1
*/

int *combine(int n1, int n2, int arr1[], int arr2[]) {
    int *combined = malloc((n1+n2) * sizeof(*combined));
    int length = sizeof(*combined) / sizeof(combined[0]);
    for(int i = 0; i < n1; i++) {
        combined[i] = arr1[i];
    }
    for(int i = 0; i < n2; i++) {
        combined[n1+i] = arr2[i];
    }
    return combined;
}

int *bubbleSort(int n, int arr[]) {
    // compare first two elements, 
    // swap if the first is greater than the second
    int temp = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(arr[j] < arr[j-1]) {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }   
        }
    }

    return arr;
}

int main() {
    int n1 = 0;
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &n1);
    int arr[n1];
    for(int i = 0; i < n1; i++) {
        arr[i] = i;
    }
    printf("Input %d elements in the array : \n", n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d ", &arr[i]);
    }
    
    
    int n2 = 0;
    printf("Input the number of elements to be stored in the second array : ");
    scanf("%d", &n2);
    int arr2[n2];
    for(int i = 0; i < n2; i++) {
        arr2[i] = i;
    }
    printf("Input %d elements in the array : \n", n2);
    for(int i = 0; i < n2; i++) {
        printf("element - %d : ", arr2[i]);
        scanf("%d", &arr2[i]);
    }
    

    int *newArr = combine(n1, n2, arr, arr2);
    
    printf("combined array: \n");
    for(int i = 0; i < n1+n2; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    int *newnewArr = bubbleSort(n1+n2, newArr);
    printf("combined array bubble sort: \n");
    for(int i = 0; i < n1+n2; i++) {
        printf("%d ", newnewArr[i]);
    }

    return 0;
}