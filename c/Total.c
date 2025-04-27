#include <stdio.h>

int main(int argc, char const *argv[])
{
    int totalItems = 10;
    float cost_per_item = 1.99;
    float cost_total = totalItems * cost_per_item;
    char dollarSign = '$';

    printf("Total of purchase is: %c %.2f", dollarSign, cost_total);

    return 0;
}
