/*
Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****


*/

#include<stdio.h>

int main(){
     
     int n ;
     printf("Enter value of n");
     scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j = 5; j++)
        {
            printf("*" );
        }
        printf("\n");
    }
    
    return 0;
}