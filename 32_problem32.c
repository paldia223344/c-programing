/*
Q32: Write a program to check if a number is a palindrome.

*/
 #include<stdio.h>
 
 int main(){
    

     int original_number,reversed_number;
    printf("Enter a  3 to 4 digit number ");
    scanf("%d", &original_number);

        printf("Enter the number you entered in reverse order");
    scanf("%d", &reversed_number);

    if (original_number == reversed_number)
    {
        printf("It's a palindrome number");

    }else{
        printf("The number is not a palindrome number");

    }
    

    return 0;
 }