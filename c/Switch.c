#include <stdio.h>

int main(int argc, char const *argv[])
{
    int loginType = 1;

    switch (loginType)
    {
    case 1:
        printf("You're logged as Company");
        break;
    case 2:
        printf("You're logged as Administrator");
        break;
    case 3:
        printf("You're logged as Deliveryman");
        break;

    default:
        printf("Login is invalid: Throw exception");
        break;
    }
    return 0;
}
