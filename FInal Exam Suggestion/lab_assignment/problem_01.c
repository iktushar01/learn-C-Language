#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nSum of each row:\n");
    for(int i = 0; i < m; i++) {
        int rowSum = 0;
        for(int j = 0; j < n; j++) {
            rowSum += a[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowSum);
    }

    printf("\nSum of each column:\n");
    for(int j = 0; j < n; j++) {
        int colSum = 0;
        for(int i = 0; i < m; i++) {
            colSum += a[i][j];
        }
        printf("Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
