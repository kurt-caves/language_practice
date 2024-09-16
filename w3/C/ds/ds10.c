#include <stdio.h>

/*
Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/

void evenAndodd(int n, int arr[]) {
    int even = 0;
    int odd = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] %2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("number of evern %d, number of odd %d\n", even, odd);
    int arr1[even];
    int arr2[odd];
    for(int i = 0; i < even; i++) {
        arr1[i] = i;
    }
    for(int i = 0; i < even; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[j] % 2 == 0) {
                arr1[i] = arr[j];
                i++;
            }
        }

    }
    for(int i = 0; i < odd; i++) {
        for(int j = 0; i < n; j ++) {
            if(arr[j % 2 != 0]) {
                arr2[i] = arr[j];
                i++;
            }
        }
    }
    printf("the even array :\n" );
    for(int i = 0; i < even; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("the odd array :\n" );
    for(int i = 0; i < odd; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
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
    evenAndodd(n, arr);

}