#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int myInt;
    char myChar;
    float myFloat;
    double myDouble;
    bool myBool;
    char myString[30];

    printf("%lu \n", sizeof(myInt));
    printf("%lu \n", sizeof(myChar));
    printf("%lu \n", sizeof(myFloat));
    printf("%lu \n", sizeof(myDouble));
    printf("%lu \n", sizeof(myBool));
    printf("%lu \n", sizeof(myString));

    // Allocate

    int students;
    int qtyOfStudents = 12;

    students = calloc(qtyOfStudents, sizeof(students));

    printf("The quantity of bytes from students are: %lu", qtyOfStudents * sizeof(students));

    return 0;
}
