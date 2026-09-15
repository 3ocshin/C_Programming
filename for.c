#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001 > nul");

    int a, b;

    for(int a = 5; a >= 0; a--)
    {
        for(b = 1; b <= 1; b++)
        {
            printf("*");
        }
        printf("\n");
    }
}