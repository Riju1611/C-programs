// 4. Dividing two numbers.
#include <stdio.h>
int main()
{
    float num1,num2,division;
    printf("Enter 1st number:");
    scanf("%f",&num1);
    printf("Enter 2nd number:");
    scanf("%f",&num2);
    division=num1/num2;
    printf("The quotient of %f and %f is %f", num1, num2, division);
    return 0;

}
