#include <stdio.h>

/*
Write a program in C for a 2D array of size 3x3 and print the matrix.
Test Data :
Input elements in the matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Expected Output :
The matrix is :

1 2 3
4 5 6
7 8 9
*/

int main(void) {
    int n = 0;
    int m = 0;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    printf("Enter number of elements per row: \n");
    scanf("%d", &m);
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("element - [%d],[%d] :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}