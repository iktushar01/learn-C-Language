#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], cleaned[200];
    int i, j = 0, len, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {  
            cleaned[j++] = tolower(str[i]);  
        }
    }
    cleaned[j] = '\0'; 

    len = j;
    for (i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}
