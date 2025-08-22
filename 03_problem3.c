/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include<stdio.h>

int main(){

    int l , b;
    l= b = 6;

     int area = l*b;
     int perimeter = 2* (l+b);

     printf("Area of rectangle is %d\n", area);
     printf("Perimeter of rectangle is %d\n", perimeter);


    return 0;
}