//================================================
//========Calculate Average of the array elements.
//================================================
#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // number of elements
    // printf("%d", n); // output 5
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[1]; // add each element to sum
    }
    float average = (float)sum / n; // typecast to float for decimal result
    printf("Average = %.2f\n", average);
    return 0;
} 