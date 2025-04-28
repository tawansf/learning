#include <stdio.h>

// Function declaration

int sum();
int area(int x, int y);

int main(int argc, char const *argv[])
{
    int sumVar = sum();
    printf("The sum is: %i \n", sumVar);
    int areaVar = area(17, 6);
    printf("The area of terrain is => %i \n", areaVar);
    return 0;
}


// Function definition

int sum() {
    int x = 10, y = 15;
    int sum = x + y;
    return sum;
}

int area(int x, int y) {
    return x * y;
}