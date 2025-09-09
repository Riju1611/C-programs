//19. Calculate area of a circle.
#include <stdio.h>
#define PI 3.14
int main()
{
    float a,r;
    printf("Enter radius: ");
    scanf("%f",&r);
    a=PI*r*r;
    printf("Area: %f",a);
    return 0;
}
