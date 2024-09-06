// Chapter 2 exercise 2-21
#include <stdio.h> // for printf and scanf

// print a box
// print a circle
// print an arrow
// print a diamond

int main() {

    printf("Here is a box\n");
    printf(
        "*********\n*\t*\n*\t*\n*\t*\n*\t*\n*\t*\n*\t*\n*\t*\n*********\n"
    );
    printf("Here is a circle: \n");
    printf(
        "     ***\n"
        "   *\t *\n"
        "  *\t  *\n"
        "  *\t  *\n"
        "  *\t  *\n"
        "  *\t  *\n"
        "  *\t  *\n"
        "   *\t *\n"
        "     ***\n"
        
    );
    printf("Here is an arrow: \n");
    printf(
        "    *\n"
        "   ***\n"
        "  *****\n"
        "    *\n"
        "    *\n"
        "    *\n"
        "    *\n"
        "    *\n"
        "    *\n"
    );

    return 0;
}