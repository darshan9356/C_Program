#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no");
    scanf("%d%d",&a,&b);

    if(a==b){
    printf("both no are equal\n");
}
else if(a > b)
{
    printf("%d is greater than %d\n",a,b);
}
else
{
    printf("%d is less than %d\n",a,b);

}
}

