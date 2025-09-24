/*

Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include<stdio.h>

int main(){
    
    int row,column;
    printf("Enter  number of rows and columns");
    scanf("%d  %d", &row,&column);
    int matrix[row][column];
    // read the matrix

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&matrix[i][j]);
            
        }
        
    }
    // print
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
          printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}