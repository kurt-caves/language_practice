#include <stdio.h>

/*
Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
*/

int main() {

    int height = 7;
    int width = 5;
    // perimeter: 
    // P = 2 \times (length + width)
    // area: length x width
    printf("The perimeter of the rectangle = %d square inches\n", 2 *(height + width));
    printf("The area of the rectangle = %d square inches\n ", height * width);



    return 0;
}