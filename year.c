#include<stdio.h>
void main ()
{
    int year;
    printf("Enter is year");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||(year%400==0))
         printf("leep year");
else
     printf("Not leep year");
}