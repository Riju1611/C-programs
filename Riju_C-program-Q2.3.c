//3. Find out net salary.
#include <stdio.h>
int main()
{
    float gross,allowance,deduction,net;
    printf("Enter gross salary:");
    scanf("%f",&gross);
    if (gross>10000)
    {
        allowance=0.1*gross;
        deduction=0.03*gross;
    }
    else if (gross>5000)
    {
        allowance=0.07*gross;
        deduction=0.02*gross;
    }

    net=gross+allowance-deduction;
    printf("allowance=%f\n",allowance);
    printf("deduction=%f\n",deduction);
    printf("net salary=%f\n",net);
    return 0;
}
