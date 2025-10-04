/*
Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
 #include<stdio.h>
 #include<string.h>
 
 int main(){
    char string[] = " stress ";
    int len = strlen(string);
    for (int i = 0; i <len; i++)
    {
       for (int j  = i+1; j< len; j++)
       {
        if (string[i] == string[j])
        {
            printf("%c\n", string[i]);
        }
        
       }
       
    }
    
    return 0;
 }