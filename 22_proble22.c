/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.

*/

#include<stdio.h>

int main(){
    float cost_price, selling_price;
    printf("Enter cost price \n");
    scanf("%f", &cost_price);
    printf("Enter selling price \n");
    scanf("%f", &selling_price);
    
     float profit =  selling_price - cost_price;
     float loss = cost_price - selling_price;
     

    if (selling_price >cost_price)
    {
       printf("You made a profit  \n");
       printf("You made a profit by %f \n", profit);
       printf("Profit percentage : %f \n",(profit/cost_price) * 100 );
       
    }
    else{
        printf("You made a loss  \n");
       printf("You made a loss by %f  \n", loss);
       printf("Profit percentage : %f \n",(loss/cost_price) * 100 );

    }
    
   
    return 0;
}