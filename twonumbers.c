#include<stdio.h>
int main()
{
    int a,b,AM,HM;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);

    AM =(a + b)/2;
    HM = (a*b)/(a + b);

    printf("Arithmatic is = %d\n",AM);
    printf("Harmonic is = %d\n",HM);
    return 0;
}