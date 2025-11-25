/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
 #include<stdio.h>
 #include<string.h>
 
 int main(){
    enum Months{
        JANUARY,
        FEBURARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER,
    };
    char month[100];
    printf("Enter name of a month\n");
     scanf("%s",month);

     switch (month)
     {
     case JANUARY:
     printf("31");
     break;

     case FEBURARY:
     printf("28");
     break;

     case MARCH:
     printf("31");
     break;

     case APRIL:
     printf("30");
     break;

     case MAY:
     printf("31");
     break;

     case JUNE:
     printf("30");
     break;

     case JULY:
     printf("31");
     break;

     case AUGUST:
     printf("30");
     break;

     case SEPTEMBER:
     printf("31");
     break;

     case OCTOBER:
     printf("30");
     break;

     case NOVEMBER:
     printf("31");
     break;

     case DECEMBER:
     printf("30");
     break;
     }
    
    return 0;
 }