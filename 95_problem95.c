/* 
Q95: Check if one string is a rotation of another.
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/
  #include<stdio.h>
  #include<string.h>
  
  int main(){
    
   char str1[] = "abc", str2[] = "cba";
   int n = strlen(str1);
   int n1 = strlen(str2);
   if (n != n1)
   {
   printf(" rotation is'nt possible");
   
   }
   
   int i , j =0;
   char str[100];
   for ( i = 0; i < n; i++)
   {
    for ( j = 0; j < n1; j++)
    {
        str[j]= str1[(i+j)%n];
    }
    str[n] = ' ';
    

    if (strcmp(str , str2) == 0)
    {
printf("Rotation is possible");
    }
    
   }
   
    return 0;
  }