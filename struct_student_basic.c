#include <stdio.h>
#include <string.h>

// Basic example of defining and using a structure in C
struct Student
{
    int id;
    char name[50];
    float grade;
};

int main()
{
    struct Student student1;

    // Assigning values to structure members
    student1.id = 123;
    strcpy(student1.name, "Ahmet Yilmaz");
    student1.grade = 85.5;

    // Displaying structure data
    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Student Grade: %.2f\n", student1.grade);

    return 0;
}
