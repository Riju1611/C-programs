//9. Convert rupees into dollars.
#include <stdio.h>
int main()
{
    float dollars,rupees;
    printf("Enter rupees:");
    scanf("%f",&rupees);
    dollars=rupees/48;
    printf("%f rupees=%f dollars",rupees,dollars);
    return 0;
}
