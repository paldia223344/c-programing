/*
Q21: Write a program to display the month name and number of days using switch-case for a given month number.

*/
#include<stdio.h>

int main(){
    int month;
    printf("Enter month (1-12)");
    scanf("%d", &month);

    switch (month)
    {
        case 1:
        printf("There will be 30 days in january");
        break;
        case 2:
        printf("There will be 28 days in feburary ");
        break;
        case 3:
        printf("There will be 30 days in march");
        break;
        case 4:
        printf("There will be 31 days in april");
        break;
        case 5:
        printf("Thre will be 30 days in may");
        break;
        case 6:
        printf("There wil be 31 days in june");
        break;
        case 7:
        printf("Thre will be 30 days in july");
        break;
        case 8:
        printf("There wil be 31 days in august");
        break;
        case 9:
        printf("Thre will be 30 days in september");
        break;
        case 10:
        printf("There wil be 31 days in october");
        break;
        case 11:
        printf("Thre will be 30 days in november");
        break;
        case 12:
        printf("There wil be 31 days in december");
        break;
        default:
        printf("Entera correct month");

    }

}