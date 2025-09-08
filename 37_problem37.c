/*
Q37: Write a program to find the LCM of two numbers.
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main()
{
    int num1;
    printf("Enter first number:  ");
    scanf("%d", &num1);

    int num2;
    printf("Enter second number:  ");
    scanf("%d", &num2);
 
    printf("L.C.M of %d  nad %d :    \n",num1,num2);
    printf("%d\n", num1*num2);


    return 0;
}