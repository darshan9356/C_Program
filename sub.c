#include<stdio.h>
int main()
{
    int roll;
    char name[100];
    float mark;
    char subject[50];

    printf("Enter student details :");
    printf("\n roll Number");
 scanf("%d",& roll);
    printf("Name :");
 scanf("%s",name);
    printf("mark :");
 scanf("%f", & mark);
    printf("subject :");
 scanf("%s",subject);

if (mark >= 90)
    printf("Grade O\n");
else if (mark >= 80)
    printf("Grade A+\n");
else if (mark >= 70)
    printf("Grade A\n");
else if (mark >= 60)
    printf("Grade B+\n");
else if (mark >= 50)
    printf("Grade B\n");
else if (mark >= 40)
    printf("Grade C\n");
else if (mark >= 35)
    printf("Grade D\n");
else
    printf("FAIL\n");

return 0;
}
