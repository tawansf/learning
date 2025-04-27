#include <stdio.h>

int main(int argc, char const *argv[])
{
    int limit = 5;
    int usage = 0;

    do
    {
       printf("Tata \n");
       usage++;
    } while (usage <= limit);
    
    return 0;
}
