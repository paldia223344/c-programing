/*
Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include<stdio.h>
#include<ctype.h>

 void toggle( char string);
    char string[100]="Hello";
    for (int i = 0; string[i]; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z'){
            string[i]  += 32;
        }
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] -= 32;
        }
        
    }
     int main(){
char string[100];
printf("Enter  a string");
    scanf("%s", string);
    toggle(string);
    printf("%s", str);
    
    return 0;
}
