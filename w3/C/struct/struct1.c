#include <stdio.h>

/*
1. Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.
 */

struct Student
{
    char name[50];
    int age;
    int totalMarks;
};

int main(void) {
    struct Student student1, student2;
    printf("Enter student 1's name: ");
    scanf("%s", student1.name);
    printf("Enter student 1's age: ");
    scanf("%d", &student1.age);
    printf("Enter student 1's total marks: ");
    scanf("%d", &student1.totalMarks);
    printf("here is all the info on student 1: name %s, age %d, total makrs: %d", student1.name, student1.age, student1.totalMarks);

}