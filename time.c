#include<stdio.h>
int main()
{

int h,m,s;
printf("Enter a time for hour:");
scanf("%d",&h);
printf("Enter a time for minute:");
scanf("%d",&m);
printf("Enter a time for second:");
scanf("%d",&s);
         printf("\n");
    if(h >= 0 && h <24)
    {
         printf("%d Time is void HOUR : ",h);
         printf("\n");
   
        if(m >=0 && m < 60)
        {
         printf("%d Time is MINUTE : ",m);
         printf("\n");
               if(s >=0 && s < 60){
                printf("%d Time is SECOND : ",s);
             printf("\n");
              }}
                     }       }
     
