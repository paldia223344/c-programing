/*
Q15: Write a program to input a character and check whether it is an uppercase alphabet,
 lowercase alphabet, digit, or special character.

*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character\n");
    scanf(" %c", &ch);

    if (ch == 'A' && ch <= 'Z')
    {
        printf("You entered a uppercase alphabet\n");
    }
    else if (ch == 'a' && ch <= 'z')
    {
        printf("You entered  a lowercase\n");
    }
    else if (ch == '0' && ch <= '9')
    {
        printf("You have entered a digit\n");
    }
    else
    {
        printf("You have entered a special character\n");
    }

    return 0;
}