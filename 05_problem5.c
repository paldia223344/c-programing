/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.
*/

#include <stdio.h>

int main()
{
    float c;
    printf("Enter temperature in celsius  : ");
    scanf("%f", &c);

    printf("The temperature in  fahrenheit is %f", (c * (9 / 5)) + 32);
    return 0;
}
