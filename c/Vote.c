#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int myAge = 26;
    int votingAge = 18;

    if (myAge >= votingAge) {
        printf("Your has age for voting!");
    } else {
        printf("You are so young, can't vote!");
    }

    return 0;
}
