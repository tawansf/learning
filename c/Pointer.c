#include <stdio.h>
#define PI 3.14159265

int main(int argc, char const *argv[])
{
    int myNumbers[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 4; i++)
    {
        printf("Pos %d: =>", i);
        printf("%pd\n", &myNumbers[i]);
    }

    return 0;
}
