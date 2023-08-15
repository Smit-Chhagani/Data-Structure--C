// 23. Write a program to calculate and display sum to two mXn matrices.

#include <stdio.h>

void ScanMatrix(int m, int n,int a[m][n]){
    printf("Enter elements of matrix :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void matrixSum(int m, int n, int matrix1[m][n], int matrix2[m][n], int sum[m][n]) {
    int i, j;

    // Calculate the sum of the matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
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

int main() {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix1[m][n];
    int matrix2[m][n];
    int sum[m][n];

    ScanMatrix(m,n,matrix1);
    ScanMatrix(m,n,matrix2);

    matrixSum(m, n, matrix1, matrix2, sum);

    printf("Matrix 1:\n");
    displayMatrix(m, n, matrix1);

    printf("Matrix 2:\n");
    displayMatrix(m, n, matrix2);

    printf("Sum of the matrices:\n");
    displayMatrix(m, n, sum);

    return 0;
}
