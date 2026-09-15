#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001 > nul");

    int a,b, temp;
    scanf("%d", &a);
    scanf("%d", &b);
    
    temp = b;
    while(temp > 0)
    {
        printf("%d\n", a*(temp % 10));
        temp /= 10;
    }
    return 0;

}
