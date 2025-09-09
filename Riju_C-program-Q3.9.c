//9. Print sum of 1st n even nos.
#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter value of n:");
    scanf("%d",&n);
    sum=n*(n+1);
    printf("sum of %d even numbers:%d\n",n,sum);
    return 0;
}
