/*
Q16: Write a program to input three numbers and find the largest among them using if–else.

*/

#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter a value of x\n");
    scanf("%d", &x);
    printf("Enter a value of y\n");
    scanf("%d", &y);
    printf("Enter a value of z\n");
    scanf("%d", &z);

    if (x > y && x > z)
    {
        printf("x is the greatest among three\n");
    }
    else if (y > x && y > z)
    {
        printf(" y is greatedst among  three\n");
    }
    else
    {
        printf("z  is greatest among three\n");
    }

    return 0;
}