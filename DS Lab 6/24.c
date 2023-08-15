//  24. Write a program two multiply two matrices. 

#include<stdio.h>

void scanMatrix(int r, int c,int m[r][c]){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element for row %d col %d :", i, j);
            scanf("%d",&m[i][j]);
        }
    }
}

void  matrix_multiplication(int row1, int row2, int col1, int col2, int m1[row1][col1],int m2[row2][col2], int result[row1][col2]){
    int i, j, k;
    // Perform matrix multiplication
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (k = 0; k < col1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void displayMatrix(int m, int n, int matrix[m][n]) {
    int i, j;

    // Display the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int row1, col1, row2, col2, i, j;

    //1st matrix declare and scan
    printf("Enter row for matrix 1:");
    scanf("%d",&row1);
    printf("Enter cols for matrix 1:");
    scanf("%d",&col1);
    int m1[row1][col1];
    scanMatrix(row1, col1, m1);
    //2nd matrix declare and scan
    printf("Enter row for matrix 2:");
    scanf("%d",&row2);
    printf("Enter cols for matrix 2:");
    scanf("%d",&col2);
    int m2[row2][col2];
    scanMatrix(row2, col2, m2);
    
    int result[row1][col2];
    //print 1st matrix
    printf("\n1st matrix\n");
    displayMatrix(row1, col1, m1);
    //print 2nd matrix
    printf("\n2nd matrix\n");
    displayMatrix(row2, col2, m2);
   
    matrix_multiplication( row1, row2, col1, col2, m1, m2, result);
    printf("Result of matrix multiplication:\n");
    displayMatrix(row1, col2, result);
    return 0;
}