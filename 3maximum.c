#include<stdio.h>
int main()
{
    int a,b,c;
    int Max,Min;
    printf("Enter three no");
    scanf("%d%d%d",&a,&b,&c);

    if(a >= b && a >= c)
     Max = a;
    else if( b>=a && b>c)
        Max = b;
         else
        Max = c;
        // find max
        if(a <= b && a <= c)
        Min = a;
        else if( b <= a && b <= c)
        Min =b;
        else
        Min =c;
    
        printf("Maxmium is = %d \n", Max);
        printf("minium is  = %d\n",Min);

    }
