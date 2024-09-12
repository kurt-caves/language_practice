#include <stdio.h>
#include <math.h>

/*
Write a program in C to find the maximum and minimum elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/
void maxAndMin(int n, int arr[]) {
    double max = -INFINITY;
    double min = INFINITY;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum element is : %0.f\n", max);
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum element is : %0.f\n", min);
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
    maxAndMin(n1, arr);

}