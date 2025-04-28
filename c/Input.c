#include <stdio.h>

int main(int argc, char const *argv[])
{
    int myInt;
    char myChar;
    char myFirstName[30];

    /*printf("Type a number and a character and press enter: \n");

    scanf("%d %c", &myInt, &myChar);

    printf("Your number is: %d \n", myInt);

    printf("Your character is: %c \n", myChar);*/

    printf("Type your first name: \n");

    fgets(myFirstName, sizeof myFirstName, stdin);

    printf("Your first name is: %s \n", myFirstName);

    // Memory address 0061FF0C
    printf("%p", &myFirstName);

    return 0;
}
