#include <stdio.h>
#include <string.h>

struct myStruct
{
    int number;
    char string[20];
};

int main(int argc, char const *argv[])
{
    struct myStruct s1 = {26, "Tatas"};
    
    s1.number = 26;
    strcpy(s1.string, "Tatas");

    printf("Age => %d \nName => %s \n", s1.number, s1.string);

    return 0;
}
