Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
 #include<stdio.h>
 #include<stdlib.h>
 
 int main(){
    FILE *fptr,*ptr;
    fptr =fopen("test.txt","r");
    char ch;
    ch = fgetc(fptr);
    if (fptr == NULL)
    {
        puts("cannot open the file");
        exit(1);
    }

    ptr = fopen("we=rite.txt","w");
    if (ptr== NULL)
    {
        puts("cannot open the file");
        exit(2);
    }
    
    while(1){
    ch = fgetc(fptr);
if (ch == EOF)
{
    break;
}else{
    putc(ch,ptr);
}

}
   

fclose(fptr;
fclose(ptr);)
    return 0;
 }