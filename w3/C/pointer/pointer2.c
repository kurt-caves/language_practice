#include <stdio.h>

/*
2. Write a program in C to demonstrate how to handle pointers in a program.
Expected Output :

Address of m : 0x7ffcc3ad291c
 Value of m : 29                                                                                              
                                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7 
*/

int main(void) {
    int m = 29;
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
    // set ab as a pointer to an int
    int *ab;
    // set ab as the address of m
    ab = &m;
    printf("Now ab is assigned with the address of m.\n");
    // print ab which is the address
    printf("Address of pointer ab : %p\n", ab);
    // dereference the pointer to get the value
    printf("Content of pointer ab : %d\n", *ab);

    m = 34;
    printf("The value of m assigned to 34 now.");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);

}