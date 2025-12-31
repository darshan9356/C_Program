#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);
// if((ch >=65 && ch <=90)||(ch >=97 && ch <=122))
// printf("%c is Alphabet !!",ch);
// else if (ch >=48 && ch <=57)
// printf("%c is digit !!",ch);
// else
// printf("%c is special character !!",ch);
// if((ch>='a' && ch<='z')||(ch>='a' && ch<='Z'))
// printf("%c is Alphabet !!",ch);
// else if(ch>='0'&& ch <='9')
// printf("%c is digit !!",ch);
// else
// printf("special symbol");
if(isalpha(ch))
printf("%c is Alphabet !!",ch);
else if(isdigit(ch))
printf("%c is digit !!",ch);
else if(ispunct(ch))
printf("%c Special Symbol",ch);

 return 0;
 }
