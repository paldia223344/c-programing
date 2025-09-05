/*
Q34: Write a program to check if a number is prime.

*/
 #include<stdio.h>
 
 int main(){
    int n ;
    printf("Enter a  number");
    scanf("%d", &n);
     if (n/2 != 0 && n>1 && n/3 != 0)
     {
       printf("Prime");
     } else{
        printf("Not Prime");
     }
     
    return 0;
 }