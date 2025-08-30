/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

*/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter side a\n");
    scanf("%d", &a);
    printf("Enter side b\n");
    scanf("%d", &b);
    printf("Enter side c\n");
    scanf("%d", &c);
    if (a == b && b == c && a == c)
    {
        printf("It is an equilateral triangle with all its equal sides");
    }
    else if ((a == b && b == c) || (a == c && b == c))
    {
        printf("It is an isosceles triangle");
    }
    else
    {
        printf("It is a scalene traingle");
    }

    return 0;
}