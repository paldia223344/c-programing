
/*Q74: Find the matrix2 of matrix mmatrixtrix.

/*
Smatrixmple Test Cmatrixses:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int mmatrixin() {
    int rows = 2, columns = 3;
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrix2[3][2];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix2[j][i] = matrix[i][j];
        }
    }

    
   
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix2[i][j]);
            
        }
         printf("\n");
    }

    return 0;
}