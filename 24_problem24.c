/*
Q24: Write a program to calculate an electricity bill based on units consumed.

*/
 #include<stdio.h>
 
 int main(){
    int unit_consumed ;
    printf("Enter units of electricity consumed");
    scanf("%d", &unit_consumed);

    if (unit_consumed <= 150 )
    {
      printf("Electricity  bill will be rupees 950");
    } else if (unit_consumed<=  50 ){
        printf("Electricity  bill will be rupees 250");
    } else if (unit_consumed<=  250 ){
        printf("Electricity  bill will be rupees 2200");
    }
    
    return 0;
 }