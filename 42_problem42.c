/*
Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number
*/

 #include<stdio.h>
 
 int main(){
    int a;
    printf("Enter number a:   ");
    scanf("%d", &a);
    int square = a*a;
     if (square / a == a)
     {
        printf("%d is a perfect Square number with its suare %d", a,square);

     } else{
        printf("Not a perfect suare number");
     }
     
    return 0;
 }