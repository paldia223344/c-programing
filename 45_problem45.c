/*
Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

 #include<stdio.h>
 
 int main(){
float numerator = 2;
 float denomenator  = 3;
 float fraction;
 
     int n ;
     printf("Enter number of timed we have to get sum of the series:   \n");
     scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
          fraction = numerator/denomenator;
  numerator += 2;
  denomenator += 4;

    }
     printf("sum will be  1%f\n", &fraction);
    
    return 0;
 }