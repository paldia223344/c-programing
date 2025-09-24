/*
Q69: Find the second_first_greatest largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>

int main(){
    int arr[10]  = {15,33,57,23,53,85,43,77};
  int i , second_first_greatest, first_greatest ;
  
  if (arr[0] > arr[1])
  {
    first_greatest = arr[0];
    second_first_greatest = arr[1];
  }else{
    second_first_greatest = arr[0];
    first_greatest = arr[1];
  }
for ( i = 2; i < 8; i++)
{
    if (arr[i] >first_greatest)
    {
        second_first_greatest = first_greatest ;
        first_greatest= arr[i];

    }else{
         second_first_greatest = arr[i];
         
    }
    
}

printf("%d", second_first_greatest);

  




return 0;
}