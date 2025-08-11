#include <stdio.h>

int main()
{
    int marks[10];  // Array to store marks (max 10 elements)
    int n;          // Number of elements user wants to enter
    int sum = 0;    // To store sum of all marks
    double average; // To store calculated average
    int i;

    // Ask user how many numbers they want to input
    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);
    // Check if n is valid (1 to 10)
    if (n <= 0 || n > 10)
    {
        printf("Please enter a valid number between 1 and 10.\n");
        return 1; // Exit program with error code
    }
    // Loop to input marks and calculate sum
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &marks[i]);

        sum += marks[i]; // Add current mark to sum
    }
    // Calculate average (cast sum to double for decimal division)

    average = (double)sum / n;

    // Print average with 2 decimal places
    printf("Average = %.2lf\n", average);
    return 0;
}