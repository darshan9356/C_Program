#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);   // space before %c avoids newline issue

    printf("ASCII value of %c is %d", ch, (int)ch);

    return 0;
}
