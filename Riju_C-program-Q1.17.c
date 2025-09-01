//17. Calculate area & perimeter of a square.
#include <stdio.h>
int main()
{
    int l,a,p;
    printf("Enter length of the side of a square: ");
    scanf("%d",&l);
    a=l*l;
    p=4*l;
    printf("Area: %d\nPerimeter: %d",a,p);
    return 0;
}
