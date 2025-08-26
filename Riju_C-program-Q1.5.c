// 5. Add, subtract, multiply, divide two numbers.
#include <stdio.h>
int main()
{
    int num1,num2;
    int sum, difference, product, division;
    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;
    division=num1/num2;
    printf("The sum of %d and %d is %d\n",num1,num2,sum);
    printf("The difference of %d and %d is %d\n",num1,num2,difference);
    printf("The product of %d and %d is %d\n",num1,num2,product);
    printf("The quotient of %d and %d is %d\n",num1,num2,division);
    return 0;
}
