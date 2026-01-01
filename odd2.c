#include<stdio.h>
 int main(){
   int num;
    printf("enter is number");
    scanf("%d",&num);
    if(num %2 == 0)
{
printf("Even is number\n");
}
else
{
printf("odd is numbe\n");
 return 0;
}
 }





 #include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Conditional operator
    (num % 2 == 0) ? printf("The number is even.\n") : printf("The number is odd.\n");

    return 0;
}
