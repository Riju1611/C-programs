//20. Calculate area of triangle.
#include <stdio.h>
int main()
{
    float a,h,l;
    printf("Enter height and base length: ");
    scanf("%f %f",&h,&l);
    a=(h*l)/2;
    printf("Area of triangle: %f",a);
    return 0;
}
