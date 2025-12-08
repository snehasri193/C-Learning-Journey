#include <stdio.h>

int main() {
    int a, b, and_result, or_result, xor_result;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    and_result = a & b; // Bitwise AND
    or_result = a | b;  // Bitwise OR
    xor_result = a ^ b; // Bitwise XOR

    printf("%d & %d = %d\n", a, b, and_result);
    printf("%d | %d = %d\n", a, b, or_result);
    printf("%d ^ %d = %d\n", a, b, xor_result);

    return 0;
}
