/*
Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
 #include<stdio.h>
 
 int main(){
    int arr[10] = {1,2,3,4,5};
    int i;
    int n;
    printf("At what position do we rotate");
    scanf("%d", &n);
       for ( i = 4-n; i < 4; i++)
       {
        printf("%d", arr[i]);
       }
       
       for ( i = 0; i < 4-n; i++)
       {
         printf("%d", arr[i]);
       }
       

        
    return 0;
 }