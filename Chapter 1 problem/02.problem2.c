#include <stdio.h>

int main()
{
    int r;
    int height;

    printf("inter height: \n");
    scanf("%d", &height);

    printf("inter radius: \n");
    scanf("%d", &r);

    printf("the area of circle with radius %d is %f\n5534", r, 3.14 * r * r);

    printf("the volume of cylinder with radius %d and height %d is %f", r, height, 3.14 * r * r*height);

    return 0;
}