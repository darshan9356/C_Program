#include <stdio.h>

int main()
{
    float length, breadth, height;
    float door_h, door_w;
    float window_h, window_w;
    float wall_area, paint_area, roof_area;

    printf("Enter length, breadth and height of room: ");
    scanf("%f %f %f", &length, &breadth, &height);

    printf("Enter height and width of door: ");
    scanf("%f %f", &door_h, &door_w);

    printf("Enter height and width of window: ");
    scanf("%f %f", &window_h, &window_w);

    wall_area = 2 * height * (length + breadth);
    paint_area = wall_area - (door_h * door_w) - (2 * window_h * window_w);
    roof_area = length * breadth;

    printf("\nArea to be painted (walls) = %.2f sq units", paint_area);
    printf("\nArea to be whitewashed (roof) = %.2f sq units", roof_area);

    return 0;
}
