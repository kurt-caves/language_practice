#include <stdio.h>

/*
Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5
*/
void unique(int n, int arr[]) {
    // unique flag
    int isUnique;
    for(int i = 0; i < n; i++) {
        // the first element we assume is unique
        isUnique = 1;
        for(int j = 0; j < n; j++) {
            // when the inner loop is farther along
            // and we find a duplicate break out of 
            // the loop and set the flag so we dont print it
            if( i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            printf("% d", arr[i]);
        }
    }
    printf("\n");

}
int main() {
    int n = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }
    printf("Input %d elements in the array : \n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d :", arr[i]);
        scanf("%d", &arr[i]);
    }
    printf("The unique elements found in the array are:\n");
    unique(n, arr);
    return 0;
}