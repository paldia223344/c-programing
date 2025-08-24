/*
Q7: Write a program to swap two numbers without using a third variable.
*/


#include<stdio.h>

int main(){
    int a, b;

    printf("Enter value of a   :   ");
    scanf("%d", &a);

    printf("Enter value of b  :   ");
    scanf("%d", &b);

    a= b;
    b=a;

    printf("Value of a is %d\n ", a);
    printf("Value of a is %d\n ", b);


    return 0;
}