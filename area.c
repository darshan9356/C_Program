#include <stdio.h>

int main()
{
    float r, area;

    printf("Enter the radius: ");
    scanf("%f", &r);

    area = 3.14 * (r*r);

    printf("Area is = %.5f", area);

    return 0;
}
