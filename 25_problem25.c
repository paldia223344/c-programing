/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

*/
#include<stdio.h>
#include<math.h>

int main(){
    int num1, num2;
    char op;

    printf("Give a value to num1");
    scanf("%d", &num1);

    printf("Give a value to num2");
    scanf("%d", &num2);

    printf("Enter an operator (+, -, *, %%, /) :   ");
    scanf("%c", &op);

    switch(op){
        case '*':
        printf("product is  %d \n", num1* num2);
        break;

         case '+':
        printf("sum is  %d \n", num1+ num2);
        break;

         case '-':
        printf("difference is  %d \n", num1- num2);
        break;

         case '/':
        printf("division is  %d \n", num1/ num2);
        break;

         case '%':
        printf("modulus is  %d \n", num1% num2);
        break;

         default:
         printf("error");
         break;
    }

    return 0;
}