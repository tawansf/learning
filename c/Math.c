#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int number = 17;

    // Square tree
    float sqt = sqrt(17);
    printf("%f \n", sqt);

    // Round number
    printf("%f \n", ceil(sqt));
    printf("%f \n", floor(sqt));

    // Power

    printf("%f \n", pow(floor(sqt), 2));

    return 0;
}
