/*

Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.

*/

#include<stdio.h>

int main(){
    int a , b, temp;

     printf("Enter value of  a :  ");
     scanf("%d" , &a);

     printf("Enter the value of b  :");
     scanf("%d", &b);

      a = b;
       b= temp ;
        temp = a;

        printf(" Final value of a will be %d", a);
        printf(" Final value of b will be %d", b);
    return 0;
}