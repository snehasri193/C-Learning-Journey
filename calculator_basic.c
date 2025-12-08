#include <stdio.h>

int main() {
    int a, b,sum,sub,multiply,Div,mod;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    // Addition
    sum = a+b;
    printf("%d+%d=%d\n",a,b,sum);
    
    // Subtraction
    sub = a-b;
    printf("%d-%d=%d\n",a,b,sub);
    
    
    // Multiplication
    multiply = a*b;
    printf("%d*%d=%d\n",a,b,multiply);
    
    // Division
    Div = a/b;
    printf("%d/%d=%d\n",a,b,Div);
    
    // Remainder
    mod = a%b;
    printf("%d %% %d = %d\n",a,b,mod);
    
    return 0;
}
