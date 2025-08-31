/* 
Q23: Write a program to calculate a library fine based on late days.

*/
 #include<stdio.h>
 
 int main(){
    // Here days represents how many days it had been since u taken a book from library
    int days;
    printf("How many days you have exceeded from issued date  : ");
    scanf("%d", &days);
    switch (days){
        case 1 :
        printf("  Total charge for delaying for 1 day will be  10 rupees");
        break;
        case 2 :
        printf("  Total charge for delaying for 2 day will be  20 rupees");
        break;
        case 3 :
        printf("  Total charge for delaying for 3 day will be  30 rupees");
        break;
        case 4 :
        printf("  Total charge for delaying for 4 day will be  40 rupees");
        break;
        case 5 :
        printf("  Total charge for delaying for 5 day will be  150 rupees");
        break;
        case 6 :
        printf("  Total charge for delaying for 6 day will be  1000 rupees");
        break;
        default:
        printf("you are in trouble");
        break;
    }
    return 0;
 }