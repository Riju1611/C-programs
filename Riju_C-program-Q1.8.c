//8. Convert dollars into Rs.
#include <stdio.h>
int main()
{
    int dollars,rupees;
    printf("Enter dollars:");
    scanf("%d",&dollars);
    rupees=dollars*48;
    printf("%d dollars=%d rupees",dollars,rupees);
    return 0;
}
