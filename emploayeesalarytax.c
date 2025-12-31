#include<stdio.h>
int main(){
    int id;
    char name[100];
    float basicsalary,da,hra,tax,totalsalary;
    printf("Enter Employee details:\n");
    printf("id:");
    scanf("%d",&id);
    printf("Name:");
    scanf("%s",name);
    printf("basicsalary :");
    scanf("%f",&basicsalary);
    printf("DA(%%):");
    scanf("%f",&da);
    printf("HRA (%%): ");
    scanf("%f", &hra);


if(basicsalary>=200000)
tax=20;
else if(basicsalary<200000 && basicsalary>=100000)
tax=15;
else if(basicsalary<100000 && basicsalary>=50000)
tax=10;
else if(basicsalary<50000 && basicsalary>=30000)
tax=5;
else if(basicsalary<30000)
tax=0;

totalsalary=basicsalary+((basicsalary*(da+hra-tax))/100);

printf("Total Salary: %.2f", totalsalary);
return 0;

}