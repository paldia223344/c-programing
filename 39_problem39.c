/*
Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

 #include<stdio.h>
 
 int main(){
    int n ;
    printf("Enter a 4 digit number");\
    scanf("%d%d%d%d", &n);
 if (n/2 != 0)
 { 
    printf("ODD NUMBERS  will be %d",n/2 != 0);
 } else{
    printf("no odd digits ");
 }

 printf("%d", n/2 != 0);
 


 
    return 0;
 }