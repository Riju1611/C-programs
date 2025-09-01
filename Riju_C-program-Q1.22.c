//22. Calculate net sales.
#include <stdio.h>
int main()
{
    float net,gross,discount;
    printf("Enter gross sales value: ");
    scanf("%f",&gross);
    discount = 0.1*gross;
    net= gross-discount;
    printf("Net sales: %f",net);
    return 0;
}
