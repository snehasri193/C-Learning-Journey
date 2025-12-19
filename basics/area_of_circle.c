area of circle 


#include <stdio.h>

int main()
{
    float r,area;
   printf("Enter the radius r : ");
   scanf("%f", &r);
   area = 3.14 * r * r;
    printf("Area = 3.14 * %.2f * %.2f = %.2f\n", r, r, area);
    
   return 0;
}
