//7.Print sum of n natural nos.
#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter value of n:");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("sum of %d natural numbers:%d\n",n,sum);
    return 0;
}
