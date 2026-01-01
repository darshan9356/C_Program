#include<stdio.h>

int main()

{

    int amount;
    int n10, n5, n1;

    printf("Enter the amount :");
    scanf("%d",&amount);

    n10 =amount /10 ;
    amount = amount %10 ;

    n5 = amount /5 ;
    amount = amount %5 ;

    n1 = amount /1 ;
    
    printf("\nCurrency Notes to be given:");
   printf("\n10 denomination notes : %d", n10);
    printf("\n5 denomination notes  : %d", n5);
    printf("\n1 denomination notes  : %d", n1);
    return 0;

}
