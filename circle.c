#include<stdio.h>
int main()
{
int r,area,circumferenced;
float pi=3.14;
printf("Enter the radius of circle :\n");
scanf("%d",&r);
area=pi*r*r;
circumferenced=2*pi*r;
printf("Area  is :%.2f\n",pi*r*r);
printf("circumference is:%.2f\n 2*pi*r");
return 0;
}