# Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while(str[i] != '\0') {
        char ch = str[i];
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        if(lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';
    printf("String without vowels: %s\n", result);
    return 0;
}
