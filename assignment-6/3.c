#include <stdio.h>

void removeChar(char str[], char ch) {
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "hello world";
    char ch = 'o';

    removeChar(str, ch);

    printf("String after removing '%c': %s\n", ch, str);

    return 0;
}
