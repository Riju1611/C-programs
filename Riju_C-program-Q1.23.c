//23. Calculate average of three subjects
#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,total,avg;
    printf("Enter marks of subject 1,2,3:");
    scanf("%f %f %f",&sub1,&sub2,&sub3);
    total=sub1+sub2+sub3;
    avg=total/3;
    printf("Total marks=%f\n Average marks=%f",total,avg);
    return 0;
}
