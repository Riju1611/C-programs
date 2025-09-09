//14. Convert celcius into fahrenheit.
#include <stdio.h>
int main()
{
    float celcius,fahrenheit;
    printf("Enter temperature in celcius: ");
    scanf("%f",&celcius);
    fahrenheit=(9.0/5.0*celcius)+32;
    printf("%f Fahrenheit = %f Celcius",fahrenheit,celcius);
    return 0;
}
