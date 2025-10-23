#include <stdio.h>
#include <string.h>

// Structure array example
typedef struct
{
    int id;
    char name[50];
    float grade;
} Student;

int main()
{
    Student students[3] = {
        {101, "Ahmet Yilmaz", 85.5},
        {102, "Ayse Demir", 75.0},
        {103, "Mehmet Ozturk", 90.3}};

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Grade: %.2f\n\n", students[i].grade);
    }

    return 0;
}
