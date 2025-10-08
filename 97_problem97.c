/*
Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

 #include<stdio.h>
 
 int main(){
     char name[] = "Johm Doe";
     printf("%c", namw[0]);
     int i = 0;
     for (i = 1; name[i] != '\0'; i++)
     {
        if (name[i-1]  ' ' && name[i] != ' ')
        {
            printf(" %c ", name[i]);
        }else {
            return 0;
        }
        
     }
     
    return 0;
 }