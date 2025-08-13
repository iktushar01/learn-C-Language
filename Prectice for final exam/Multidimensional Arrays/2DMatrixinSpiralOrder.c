#include <stdio.h>

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int top = 0, bottom = 2, left = 0, right = 2;

    while (top <= bottom && left <= right) {
        // 1. উপরের লাইন
        for (int i = left; i <= right; i++)
            printf("%d ", mat[top][i]);
        top++;

        // 2. ডান দিকের কলাম
        for (int i = top; i <= bottom; i++)
            printf("%d ", mat[i][right]);
        right--;

        // 3. নিচের লাইন (চেক করা জরুরি)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", mat[bottom][i]);
            bottom--;
        }

        // 4. বাম দিকের কলাম (চেক করা জরুরি)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", mat[i][left]);
            left++;
        }
    }

    return 0;
}
