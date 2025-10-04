/* 
Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include<stdio.h>

int main(){
    char string[12] ="programming";
   char ch = 'g';
   int count = 0;
    for (  int  i = 0; string[i] != '0'; i++)
    {
        if (string[i] == ch)
        {
            count++;
        }
        
    }
    
printf("Frequency is %d\n", count);
    return 0;
}