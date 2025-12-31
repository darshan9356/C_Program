#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a two number");
    scanf("%d%d",&a,&b);
    a = a + b -(b=a);
    printf("A %d B=%d",a,b);
    return 0;

}
