# Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    char *word_start = str;
    char *ptr = str;

    while(*ptr) {
        if(*ptr == ' ') {
            reverse(word_start, ptr - 1);
            word_start = ptr + 1;
        }
        ptr++;
    }
    reverse(word_start, ptr - 1);

    printf("Modified sentence: %s\n", str);
    return 0;
}
