//10. Convert dollars into pounds.
#include <stdio.h>
int main()
{
    float dollars,pounds;
    printf("Enter dollars:");
    scanf("%f",&dollars);
    pounds=(dollars*48)/70;
    printf("%f dollars=%f pounds",dollars,pounds);
    return 0;
}
