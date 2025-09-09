// 14. Calculate sum and mean of any 10 values.
#include <stdio.h>
int main()
{
    int i,value,sum=0;
    float mean;
    printf("Enter 10 values:");
    for (i=1;i<=10;i++)
    {
        scanf("%d",&value);
        sum=sum+value;
    }
    mean=sum/10.0;
    printf("sum=%d\nmean=%f",sum,mean);
    return 0;
}
