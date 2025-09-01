//6. Calculate total, average of marks of three subjects.
#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,total,avg;
    printf("Enter marks of 3 subjects:");
    scanf("%f %f %f",&sub1,&sub2,&sub3);
    total=sub1+sub2+sub3;
    avg=total/3.0;
    printf("total=%f\naverage=%f\n",total,avg);
    if (sub1<35)
    {
        printf("fail\n");
    }
    else if (sub2<35)
    {
        printf("fail\n");
    }
    else if (sub3<35)
    {
        printf("fail\n");
    }
    else
    {
        if (avg>=70)
        {
            printf("result:distinction\n");
        }
        else if (avg>=60)
        {
            printf("result:first class\n");
        }
        else if (avg>=50)
        {
            printf("result:second class\n");
        }
        else if(avg>=35)
        {
            printf("result:third class\n");
        }
        else
        {
            printf("result:fail\n");
        }
        return 0;
    }


}
