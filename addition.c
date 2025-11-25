#include <stdio.h>

int main() 
{
    int a, b, result;

    printf("enter a: ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    result = a + b;

    printf("%d + %d = %d\n", a, b, result);

    return 0;
}
