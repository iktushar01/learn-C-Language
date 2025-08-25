#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char str[], int l, int r) {
    while (l < r) {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    int len = strlen(sentence);
    int start = 0;

    for (int i = 0; i <= len; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverseWord(sentence, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed words: %s\n", sentence);

    return 0;
}
