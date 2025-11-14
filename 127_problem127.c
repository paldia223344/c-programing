/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase,
 and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

 #include<stdio.h>
 #include<c.type.h>
 
 int main(){
    FILE *inputFile , *outputFile;
    inputFile= fopen("input.txt","r");
    if(inputFile == NULL){
        printf("error\n");
    }else{
        return 1;
    }
}

putFile = fopen("output.txt","w");

    if(outputFile == NULL){
        printf("error\n");
    }else{
        fclose(inputFile);
        return 1;



        while ((ch = fgetc(inputFile)) != EOF)
        {
        fputc(toupper(ch),outputFile);
        }
        

        fclose(inputfile);
        fclose(outputFile);
    return 0;
 }