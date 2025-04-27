#include <stdio.h>

int main(int argc, char const *argv[])
{

    // For Loop
    for (int i = 0; i < 10; i++)
    {
        printf("I'm learning C and pratice my english! \n");
    }

    // Nested Loop
    for (int i = 1; i <= 3; i++)
    {
        printf("Outer %d => \n", i);
        for (int j = 1; j <= 3; j++)
        {
            printf(" | Inner %d => %d \n", j, (i * j));
        }
    }

    return 0;
}
