/*

Q31: Write a program to take a number as input and print its equivalent binary representation.
*/
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

void printBinary(int num) {
    int binary[32]; 
    int i = 0;
    if (num == 0) {
        printf("0\n");
        return;
    }
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

    printBinary(number);

    return 0;
}