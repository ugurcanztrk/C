#include <stdio.h>
#include <string.h>

// Using typedef to simplify struct definition
typedef struct
{
    int id;
    char name[50];
    float grade;
} Student;

int main()
{
    Student student1;

    student1.id = 456;
    strcpy(student1.name, "Ayse Demir");
    student1.grade = 92.0;

    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Student Grade: %.2f\n", student1.grade);

    return 0;
}
