#include <stdio.h>

int main()
{
    int emp_id;
    float basic, bra, da, tax, takehome;

    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    bra = 0.10 * basic;
    da  = 0.30 * basic;
    tax = 0.05 * basic;

    takehome = basic + bra + da - tax;

    printf("\nEmployee ID : %d", emp_id);
    printf("\nTake Home Salary : %.2f", takehome);

    return 0;
}
