#include <stdio.h>

int main() {
    int n;

    //Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // Input elements
    printf("Enter %d numbers:\n",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    return 0;
}