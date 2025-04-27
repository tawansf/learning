#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5};
    int len = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i <= len; i++) {
        printf("Iterator => %d \n", array[i]);
    }


    int multiArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    int i,j;

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", multiArray[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
