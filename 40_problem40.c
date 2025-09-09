 /*
 Q40: Write a program to find the 1’s complement 
 of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
 
 */

  #include<stdio.h>
  
  int main(){
    int b1;
    printf("Enter a  binary number");
    scanf("%d", &b1);
    int  first_complemnetary;
    if (b1 == 1)
    {
       
       b1 = 0;
       first_complemnetary = b1;
       
       
    } 
    
    printf("%d", first_complemnetary);
    return 0;
  }