#include <stdio.h>

int main()
{
    float f, c, k;

    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;
    k = c + 273.15;

    printf("Temperature in celsius is: %.2f\n", c);
    printf("Temperature in kelvin is : %.2f\n", k);

    return 0;
}
