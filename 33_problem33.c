/*
Q33: Write a program to check if a number is an Armstrong number.

*/

 #include<stdio.h>
 
 int main(){
    int n,j,k,l;
    printf("Enter first number :   ");
    scanf("%d", &n);
    printf("Enter second number :   ");
    scanf("%d", &j);
    printf("Enter third number :   ");
    scanf("%d", &k);

    printf("Enter three numbers in  a sequence:   " );
    scanf("%d", &l);
 int power4 = (n,3);
 int power1 = (j,3);
 int power2 = (k,3);
 int sum = power1+power2+power4;
    if (sum= l)
    {
       printf("%d is an armstrong number", l);
    }else{
        printf("Not an armstrong number");
    }
    


    return 0;
 }