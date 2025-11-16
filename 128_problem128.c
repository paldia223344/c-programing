/*
 Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
 
 #include<stdio.h>
 #include<ctype.h>
 
 int main(){
    FILE *ptr;
    fptr = fopen("file.txt","r");
    if (fptr == NULL)
    {
    printf("ERROR\n");
    return1;
    }
    int vowels=0,consonants= 0;
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
    if (ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        vowels++;
    }else{
        consonants++;
    }
    
    }
    
    fclose(fptr);
    printf("Vowels: %d\n",vowels);
    printf("Consonants:  %d\n",consonants);
    return 0;
 }