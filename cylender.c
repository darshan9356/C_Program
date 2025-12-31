#include<stdio.h>
int main()
{
    float r,h,surfacearea,volume;
    float pi =3.14;
 printf("Enter the radius of cylender :");
 scanf("%f",&r);
 
 printf("Enter the height of cylender :");
 scanf("%f",&h);
surfacearea = 2 * pi * r * (r*h);
  volume =pi*r*r*h;
printf("Surface area of cylinder is : %.2f\n", surfacearea);
  printf("Volume of cylender is :%.2f\n",volume);
  return 0;
}