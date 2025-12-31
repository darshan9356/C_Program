#include<stdio.h>
int main()
{
    float u, a, t, v, s;
    printf("Enter intial velocity (u) :");
    scanf("%f",&u);
    printf("Enter acceleration (a) :");
    scanf("%f",&a);
    printf("Enter time (t) :");
scanf("%f",&t);

 v = u + a * t;

s = u * t + 0.5 * a * t * t;

printf("final velocity (v) =%.2f\n",v);

printf("displacement (s)= %.2f\n",s);

return 0;

}