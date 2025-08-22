//Check Whether a 2D Matrix is Symmetric

#include <stdio.h>

int main() {
    printf("Program: Check Whether a 2D Matrix is Symmetric\n\n");

    // Initialize a 3x3 matrix
    int a[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    int n = 3; // size of square matrix
    int isSymmetric = 1; // assume symmetric

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0; // not symmetric
                break;
            }
        }
        if (!isSymmetric) break;
    }

    // Print result
    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}


// 🔎 Explanation:
// Symmetric Matrix → A square matrix where a[i][j] == a[j][i] for all i, j।
// Loop দিয়ে প্রতিটা element চেক করা হয়েছে।
// যদি কোনো element symmetry maintain না করে → isSymmetric = 0 এবং loop stop।
// শেষে check করে print করা হয়েছে symmetric কিনা।
// 📌 Example Output:
// Input matrix:

// 1 2 3
// 2 5 6
// 3 6 9

// Output:
// The matrix is symmetric.
// Example of a non-symmetric matrix:

// 1 0 3
// 2 5 6
// 3 6 9

// Output:
// The matrix is not symmetric.
