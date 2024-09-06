// Chapter 2 exercise 2.20
#include <stdio.h>

// read in radius of circle 
// print the diameter
// print the circumference
// print the area
// use 3.14159
// do all calcs in print statements
// use %f

int main() {

    float radius = 0;
    float pi = 3.14159;
    printf("enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Here is the diameter: %f\n", radius * 2);
    printf("Here is the circumference: %f\n", (2*pi*radius));
    printf("Here is the area: %f\n", (radius*radius) * pi);




    return 0;
}