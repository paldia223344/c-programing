/*
Q8: Write a program to find and display the sum of the first n natural numbers.

*/

#include<stdio.h>

int main(){
    int n ;
    int sum = 0;

    printf(" Enter value of n :   ");
    scanf("%d", &n);

    for (int i = 0; i <=  n; i++)
    {
        sum += 1;
    }

    printf("The sum of n natural numbers is %d",sum );

    return 0;
}