#include<stdio.h>
int main(){
      int id;
      char Name[100];
      float basicsalary,da,hra,tax,totalsalary;
      printf("Enter is manger datails:");
      printf("\nid:");
      scanf("%d",&id);
      printf("Name :");
      scanf("%s",Name);
      printf("basicsalary :");
      scanf("%f",&basicsalary);
      printf("DA(%%):");
      scanf("%f",&da);
      printf("Hra(%%) :");
      scanf("%f",&hra);
      
      if(basicsalary>=500000)
      tax=20;
    else if(basicsalary <500000 && basicsalary >= 400000)
    tax=15;
else if(basicsalary <400000 && basicsalary >= 300000)
tax=10;
else if(basicsalary <300000 && basicsalary >= 200000)
tax=5;
else if(basicsalary >=200000)
tax=0;
 totalsalary=basicsalary+((basicsalary*(da+hra-tax))/100);
 
 printf("Total salary:%.2f",totalsalary);
 return 0;

}