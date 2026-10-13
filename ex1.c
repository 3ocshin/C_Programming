#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("%d", *p++);
    printf("%d", *p);

}