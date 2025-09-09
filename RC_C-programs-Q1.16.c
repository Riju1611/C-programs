//16. Calculate interest.
#include <stdio.h>
int main()
{
    float p,r,t,i;
    printf("Enter principle, rate, and time:");
    scanf("%f %f %f",&p,&r,&t);
    i=(p*r*t)/100;
    printf("Interest: %f",i);
    return 0;

}
