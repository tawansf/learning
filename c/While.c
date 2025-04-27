#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int usage = 1;
    int limit = 10;

    while (usage <= limit)
    {
        printf("You used 1 token \n");
        printf("Usage: %d/%d \n", usage, limit);

        usage++;
    }

    printf("You used all of %d tokens available! \n", limit);
    
    return 0;
}
