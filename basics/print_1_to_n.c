#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);
// Loop runs from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
