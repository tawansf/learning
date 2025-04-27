#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char firstName[] = "Tawan da Silva";
    char lastName[] = "Ferreira";

    int firstNameLen = sizeof(firstName) / sizeof(firstName[0]);
    int lastNameLen = sizeof(lastName) / sizeof(lastName[0]);

    /*int i,j;
    for (i = 0; i <= firstNameLen; i++) {
        printf("%c", firstName[i]);
    }

    for (j = 0; j < lastNameLen; j++)
    {
        printf("%c", lastName[j]);
    }*/

    int i,j;
    for (i = 0; i <= strlen(firstName); i++) {
        printf("%c", firstName[i]);
    }

    for (j = 0; j <= strlen(lastName); j++)
    {
        printf("%c", lastName[j]);
    }
    

    return 0;
}
