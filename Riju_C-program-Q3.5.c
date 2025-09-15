//5.Print 1st n odd nos.
#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
    }
    return 0;
}
