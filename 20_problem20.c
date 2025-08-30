/*
Q20: Write a program to display the day
 of the week based on a number (1–7) using switch-case.

*/
#include<stdio.h>

int main(){
    char day ;
    printf("Enter day(day1-7)");
    scanf("%s",&day);
    
 switch(day){
    case 1 :
    printf("monday");
    break;
    case 2 :
    printf("tuesday");
    break;
    case 3 :
    printf("wednesday");
    break;
    case 4 :
    printf("thursday");
    break;
    case 5 :
    printf("friday");
    break;
    case 6 :
    printf("saturday");
    break;
    case 7 :
    printf("sunday");
    break;
    default:
    printf("invalid input given");
 }
    return 0;
}
