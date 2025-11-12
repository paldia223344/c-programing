//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

 #include<stdio.h>
 
 int main(){
    FILE *ptr;
    char filename[100];
    char newline[1000];

    printf(" enter the name of the file appent to");
    scanf("%s",filename);

    ptr = fopen(filename,"a");
    if (ptr == NULL)
    {
      printf("cannot open a file");
      return 1;
    }
    
    getchar();

    printf("Enter the  line to append");
    fgetc(newline,sizeof(newline),stdin);

    fputs(newline,ptr);
    fclose(ptr);

    printf("text appended successfully to %s\n",filename);
    
    return 0;
 }