#include <stdio.h>

int main()
{
    // code here
    int arr[5]; // Step 1: Declare array of 5 integers
    int i;

    // Step 2 & 3: Loop and take input

    for (i = 0; i < 5; i++)
    {
        printf("Enter elements %d:", i + 1);
        scanf("%d", &arr[i]);
    }

    // Just to check, print the array
    printf("You entered: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}