/*
Q27: Write a program to print the sum of the first n odd numbers.

*/

 #include<stdio.h>
 
 int main(){
    int n;
    printf("Give  a value to n");
    scanf("%d", &n);

int sum;
   
    for (int i = 1; i <= n; i++) {
        int odd = 2 * i - 1;
        sum += odd;
    }

    printf("Sum of odd numbers will be %d ",  sum);
   


    return 0;
 }