/*
Q123: Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.


Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

 #include<stdio.h>
 
 int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");
     char ch;
     int cht =0, sp=0,t=0,bn=0;
  while (1)
  {
   ch = getc(fptr);
   if (ch == EOF)
   {
      break;
   }else{
      cht++;
   }
   if (ch == ' ')
   {
      sp++;
   }
   
   if (ch = '\n')
   {
      bn++;
  }
  if (ch == '\t')
  {
   t++;
  }
  
   fclose(fptr);
   printf("number of characters = %d\n", cht);
   printf("number of space = %d\n", sp);
   printf("number of backspace = %d\n", bn);
   printf("number of tabs = %d", t);
    return 0;
 }