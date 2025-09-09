// 13. Print sum of all nos. divisible by 13 in the range of 1 and 100.
#include <stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        if (i%13==0)
        {
            sum=sum+i;
        }
    }
    printf("sum of numbers divisible by 13 (between 1-100):%d\n",sum);
    return 0;
}
