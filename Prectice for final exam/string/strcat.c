#include <stdio.h>
#include <string.h>

int main() {
    // code here
    char str1[30] = "Hello ";
    char str2[] = "world!";
    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);
    return 0;
}