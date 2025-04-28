#include <stdio.h>

// Declarations
int sum(int k);

int main(int argc, char const *argv[])
{
    int recursion = sum(10);
    printf("Recursion => %i", recursion);
    return 0;
}

// Definitions
int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}
