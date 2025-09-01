//1. Find out largest and smallest of two values.
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    if (num1>num2)
    {
        printf("Largest=%d\nSmallest=%d",num1,num2);
    }
        else if (num2>num1)
        {
            printf("Largest=%d\nSmallest=%d",num2,num1);
        }
        else
        {
            printf("Both numbers are equal");
        }
        return 0;

}
