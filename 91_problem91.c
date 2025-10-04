/*
Q91: Remove all vowels from a .

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

 #include<stdio.h>
 #include <string.h>
#include <ctype.h>

 
 int main(){
    int i, j = 0;
  char str[] = "education";
  for ( i = 0;str[i] != '\0' ; i++)
  {
    if (!strchr("aeiouAEIOU", str[i]))
    {
        str[j++]= str[i];
    }
    
  }
  
   str[j] = '\0';
    printf("%s", str);
 
 return 0;
}