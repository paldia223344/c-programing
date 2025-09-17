/*
Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3



*/

#include<stdio.h>

int main(){
    int n ;
    int sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    int arr[10] = {10,20,4,6,34};
    for (int i = 0; i <= n; i++)
    {
        sum += arr[i];
        printf("sum is %d\n",sum); 
    }
    
    return 0;
}