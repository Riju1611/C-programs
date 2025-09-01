//7. Convert minutes into hours.
#include <stdio.h>
int main()
{
    float hours,minutes;
    printf("Enter time in minutes: ");
    scanf("%f",&minutes);
    hours=minutes/60;
    printf("%f minutes=%f hours",minutes,hours);
    return 0;
}
