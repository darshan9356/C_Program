#include<stdio.h>
int main(){
    int roll;
    char Name(100);
    float marks;
printf("Enter astudent details :");
printf("\n roll Number :");
scanf("%d",& roll);
printf("Name :");
scanf("%s", & Name);
printf("Marks :");
scanf("%f", & marks);

if (marks <= 100 && marks >=90)
printf("Grade 0");
if(marks <= 90 && marks >=80)
printf("Grade A+");
if(marks <= 80 && marks >= 70)
printf ("Grade A");
if(marks <= 70 && marks >= 60)
printf("Grade B+");
if(marks <= 60 && marks >= 50)
printf("Grade B");
if(marks <= 50 && marks >= 40)
printf("Grade C");
if(marks >=35)
printf("Grade D");
else
printf("FAIL");
return 0;
}