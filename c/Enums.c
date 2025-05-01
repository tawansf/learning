#include <stdio.h>

enum Level {
    LOW = 1,
    MEDIUM = 2,
    HIGH = 3
};

int main(int argc, char const *argv[])
{
    enum Level myLevel = HIGH;

    switch (myLevel)
    {
    case 1:
        printf("Your level is low, trying farming and kill some mini bosses and level up to next level!");
        break;
    case 2:
        printf("Your level is medium, but, you necessite more experience to enter in this cave, try hunt and up your skills before.");
        break;
    case 3:
        printf("YOU ARE THE LEGEND, your level is up than a most of users from this server, nice job.");
        break;
    
    default:
        printf("I dont know -._.-");
        break;
    }

    return 0;
}
