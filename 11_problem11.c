/*
Q11: Write a program to input an integer and check whether it is even or odd using if–else.

*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter value of a");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("You Entered an even number");
    }
    else
    {
        printf("You have entered  an odd number ");
    }

    return 0;
}