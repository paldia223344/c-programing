/*
Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("You entered zero ");
    }
    else if (a > 0)
    {
        printf("your number is positive ");
    }
    else
    {
        printf("Number is  negative");
    }

    return 0;
}