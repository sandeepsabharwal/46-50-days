# Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0, start = 0, len;

    printf("Enter a full name: ");
    scanf(" %[^\n]", name);

    len = strlen(name);

    while(i < len) {
        if(name[i] == ' ') {
            printf("%c. ", name[start]);
            start = i + 1;
        }
        i++;
    }

    printf("%s\n", &name[start]);
    return 0;
}
