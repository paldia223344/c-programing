/*
Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
 #include<stdio.h>
 
 int main(){
    int num1[] = {16,25,33,45,53,56};
    int i,n;
    printf("\nEnter element you want index of\n");
    scanf("%d", &n);
    for ( i = 0; i <=  6; i++)
    {
       if (num1[i]  == n )
       {
        printf("Index of %d is %d", n, num1[i]);
       }
       
    }
    
    return 0;
 }