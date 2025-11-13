/*
Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message;
 otherwise, read and display its content.

Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
 #include<stdio.h>
 
 int main(){
     char filenme[100];
     printf("Enter a name of a file\n");
     scanf("%s",&filename);
     FILE *fptr;
     fptr= fopen(filename,"r");
     if (fptr == NULL)
     {
        printf("____ERROR____");
     }else{
        printf("file has been successfully opened");
     }
      char ch;
      while (ch != EOF)
      {
          ch = fgetc(fptr);
        putchar(fptr);
      }
      
     fclose(fptr);
    return 0;
 }