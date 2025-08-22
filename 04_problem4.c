/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.
*/
#include <stdio.h>

int main()
{
    int r = 4;
    float area = 3.14 * r * r;
    float circumference = 2 * 3.14 * r;

    printf("Area of circle is %f\n", area);
    printf("Circumference of circle is %f\n", circumference);
    return 0;
}