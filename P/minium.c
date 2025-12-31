#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && b<=c)
printf("Minium number=%d",a);
else if(b<=a && b<=c)
printf("minimum number =%d",b);
else
printf("minimum number =%d",c);
}