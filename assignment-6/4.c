#include <stdio.h>

void removeChars(char str1[], char str2[]) {
    int i, j, k;

    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str2[j] == str1[i]) {
                for (k = j; str2[k] != '\0'; k++) {
                    str2[k] = str2[k + 1];
                }
                j--;
            }
        }
    }
}

int main() {
    char str1[] = "aeiou";
    char str2[] = "hello world";

    removeChars(str1, str2);

    printf("String after removing vowels: %s\n", str2);

    return 0;
}
