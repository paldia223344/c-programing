/*
Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include<stdio.h>

int main(){
    int count = 0;
    char str1[] = "listen", str2[] = "listen";
    int i = 0, j= 0;
    for ( i = 0; str1[i] != '\0'; i++)
    {
        for ( i = 0; str2[j] != '\0'; i++)
        {
            if (str1[i] == str2[j])
            {
                count++;
            }else{
                printf("You entered a wrong match\n");
            }
            
        }
        
       
    }
    
     
    return 0;
}