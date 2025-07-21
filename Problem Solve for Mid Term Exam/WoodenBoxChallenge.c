#include <stdio.h>

int main() {
    // code here
    printf("Here are all non-eliminated boxes:\n");
    for (int box = 1; box <= 20; box++)
    {
        if (box % 3 != 0 && box % 7 != 0)
        {
              printf("%d ", box);
        }
        
    }
    
    return 0;
}