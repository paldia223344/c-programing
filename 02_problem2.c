/*
Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.
*/

#include<stdio.h>

int main(){
    int  a , b;

    printf("Give  value to a ");
    scanf("%d", &a);

    printf("Give  value to b ");
    scanf("%d", &b);
    
     int sum = a+b;
     int difference = a-b;
     int product = a*b;

     printf("sum is %d\n", sum);
     printf("difference is %d\n", difference);
     printf("product is %d\n", product);
    
     
     if (b != 0)
     {
    int quotient = a/b;
    printf("   quotient is %d\n", quotient);
     }
     else{
        printf("invalid");
     }
     


    return 0;
}
