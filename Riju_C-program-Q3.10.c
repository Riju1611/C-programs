//10. Print factorial of a given no.
#include <stdio.h>
int main()
{
    int n,i,factorial=1;
    printf("Enter value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("factorial of %d=%d\n",n,factorial);
    return 0;
}
