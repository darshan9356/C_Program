#include<stdio.h>
int main(){
    float i,b,h;
    float SurfaceArea,volume;
    printf("Enter lenght breath and height");
    scanf("%f%f%f",&i,&b,&h);

    SurfaceArea=2*(i*b+i*h+b*h);
    volume = i*b*h;
    printf("Surface Area of cuboid = %.2f\n",SurfaceArea);
    printf("Volume of cuboid =%.2f",volume);

}