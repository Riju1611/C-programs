//15. Convert fahrenheit into celcius.
#include <stdio.h>
int main()
{
    float celcius,fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);
    celcius=5.0/9.0*(fahrenheit-32);
    printf("%f Fahrenheit = %f Celcius",fahrenheit,celcius);
    return 0;
}
