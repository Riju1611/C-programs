// 2. Subtracting two numbers.
#include <stdio.h>
int main()
{
    int num1,num2,subtract;
    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    subtract=num1-num2;
    printf("The difference of %d and %d is %d", num1, num2, subtract);
    return 0;

}
