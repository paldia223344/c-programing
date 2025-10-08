/*
Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
  #include<stdio.h>
 
 int main(){
     char name[] = "John Doe";
     printf("%c", namw[0]);
     int i = 0;
     for (i = 1; name[i] != '\0'; i++)
     {
        if (name[i-1]  ' ' && name[i] != ' ')
        {
           if (strchr(name+i, ' ') != NULL )
           {
            printf("%c",  name[i])
           }else{
            printf("%c", name + i);
           }
            return 0;
        }
        
     }
     
    return 0;
 }
