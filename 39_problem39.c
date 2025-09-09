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

  int number ;
  printf("Enter  a number");
  scanf("%d", &number);
 int digit = number %10;
 int product = 1 ;
  if (digit % 2 != 0)
  {
    product *= digit;
  }
  
  printf("product of odd digits in a number will be %d", product);

  return 0;
 }