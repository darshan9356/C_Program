#include<stdio.h>
int main()
{
    int a,b,c;
    int angle1,angle2,angle3;
    printf("Enter The triangle is valid:");
    scanf("%d%d%d",&a,&b,&c);

    if(a + b > c && a + c > b && b + c > a)
    {
        printf("The triangle is valid\n");
        
        if(a > c){int t = a; a = c; c = t;}
         if (b > c){int t =b; b = c; c = t;}
         if(c*c == a*a +b*b)
         printf("the triangle is right angled \n");
        else if(c*c >a*a + b*b)
        printf("the triangle is obtuse angled\n");
    else
    printf("the tringle is acute angled\n");
    }
    else
    {
        printf("The triangle is not valid.");
    }
    return 0;
}