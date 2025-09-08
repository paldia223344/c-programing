/*
Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27



*/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Enter hundredth digit  of your choosen number");
    scanf("%d", &num1);

    printf("Enter tense digit  of your choosen number");
    scanf("%d", &num2);

    printf("Enter once digit  of your choosen number");
    scanf("%d", &num3);

    printf("Your number is:   %d%d%d", num1, num2, num3);

    printf("Sum of digits of number will be %d:   ", num1 + num2 + num3);

    return 0;
}