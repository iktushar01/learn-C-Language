#include <stdio.h>

int main() {
    // code here
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 2; j++)
       {
            printf("Enter The Value Of Arr [%d] [%d]\n", i , j);
            scanf("%d",&arr[i][j]);
       }
       
    }
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 2; j++)
       {
            printf("The Value Of Arr [%d] [%d] is %d\n", i , j, arr[i][j]);
       }
       
    }
    
    
    return 0; 
}