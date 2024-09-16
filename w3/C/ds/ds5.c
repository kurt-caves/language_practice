#include <stdio.h>
#include <stdlib.h>

/*
Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/

int duplicate(int n, int arr[]) {
    int duplicate = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                duplicate++;
                i++;
            }
        }
    }

    return duplicate;
}

int main() {

    int n = 0;
    printf("Input the number of elements to be stored in the array : ");
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
    int dup = duplicate(n, arr);
    printf("Total number of duplicate elements found in the array is : %d\n", dup);

    return 0;
}