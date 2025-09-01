//2. Find out largest and smallest of three values.
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c)
    {
        printf("largest=%d\n",a);
    }
    else if (b>=a && b>=c)
    {
        printf("largest=%d\n",b);
    }
    else
    {
        printf("largest=%d\n",c);
    }

    if (a<=b && a<=c)
    {
        printf("smallest=%d",a);
    }
    else if (b<=a && b<=c)
    {
        printf("smallest=%d",b);
    }
    else
    {
        printf("smallest=%d",c);
    }
    return 0;
}
