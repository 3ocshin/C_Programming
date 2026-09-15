#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    system("chcp 65001 > nul");

    printf("입력 : ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("짝수") : printf("홀수");
    
    return 0;
}