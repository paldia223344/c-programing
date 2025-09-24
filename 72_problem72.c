/*
Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21


*/

#include<stdio.h>

int main(){
    int matrix[row][column];
    int row,column;
    printf("Enter  number of rows and columns");
    scanf("%d\t%d", &row,&column);;
    // read the matrix

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrix[i][j];
            int  sum = sum + matrix[i][j];
        }
        
    }
    // print
    printf("%d", sum);
    
    return 0;
}