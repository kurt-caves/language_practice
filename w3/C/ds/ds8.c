#include <stdio.h>

/*
Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times
*/

void unique(int n, int arr[]) {
    int unique = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        unique = 1;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j] ) {
                unique = 0;
                break;
            }
        }
        if(unique) {
            count++;
            printf("%d occurs %d times\n", arr[i], count);
            count--;
        }
    }
    
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
        printf("element - %d : ", arr[i]);
        scanf("%d", &arr[i]);
    }
    unique(n1, arr);

    
}