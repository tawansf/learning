#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;

    // w = write, a = append, r = read
    fptr = fopen("c:\\dev\\tutorials\\c\\file_test.txt", "a");

    //fprintf(fptr, "While read this I hacked you!");
    fprintf(fptr, "\nKeep calm, I\'ts a joke :)");

    fclose(fptr);

    return 0;
}
