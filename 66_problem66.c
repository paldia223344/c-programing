/*
Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include<stdio.h>

int main(){
    
    int arr[10] = {1,2,3,4,5};
    int size = 3;
    arr[size] = 99;
    size++;
    for (int  i = 0; i <10; i++)
    {
        printf("%d\t", arr[i]);
    }
    
 
    return 0;
}