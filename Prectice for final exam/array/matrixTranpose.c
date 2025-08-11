#include <stdio.h>

int main() {
    // code here
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of colomns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];

     // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Elements [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose matrix
     printf("\nTranspose of the matrix:\n");
     for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
     }

    return 0;
}