/*
Q29: Write a program to calculate the factorial of a number.

*/
 #include <stdio.h>

int main() {
    int num;
     int factorial = 1;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Factorial is 1\n");
    } else {
       
        for (int i = 1; i <= num; ++i) {
            factorial =  factorial * i;
        }
        
        printf("%d\n", factorial);
    }

    return 0;
}