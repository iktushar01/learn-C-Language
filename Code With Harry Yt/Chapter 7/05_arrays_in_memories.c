#include <stdio.h>

int main() {
    // code here
    int marks[5];
    printf("Enter marks of 5 students:\n");

    for (int i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("the value of marks at index %d is %u\n",i, &marks[i]);
    }
    
    return 0;
}