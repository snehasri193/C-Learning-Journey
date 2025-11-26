#include <stdio.h>

int main()
{
    float p,t,r,simpleinterest;
    printf("Enter the value of p: ");
    scanf("%f", &p);
    printf("Enter the value of t: ");
    scanf("%f", &t);
    printf("Enter the value of r: ");
    scanf("%f", &r);
    
    simpleinterest = (p*t*r)/100;
    
    printf("simple interest = (%.2f * %.2f * %.2f)/100= %.2f\n", p,t,r,simpleinterest);
    
    return 0;
}