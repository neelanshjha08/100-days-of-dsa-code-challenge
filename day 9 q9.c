#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    // Take input
    scanf("%s", str);

    // Find length of string
    int len = strlen(str);

    // Print string in reverse order
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}