#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("Max is %d",a);
else
printf("Max is %d",b);
}