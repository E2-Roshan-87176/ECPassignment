#include <stdio.h>
#include <string.h>

void replace_string(char *str, const char *old_str, const char *new_str) {
    int old_len = strlen(old_str);
    int new_len = strlen(new_str);
    int i, j, k;

    for (i = 0; str[i] != '\0'; i++) {
        j = 0;
        while (str[i + j] == old_str[j] && str[i + j] != '\0') {
            j++;
        }

        if (j == old_len) {
            
            k = i + old_len;
            for (; str[k] != '\0'; k++) {
                str[i + new_len + k - old_len] = str[k];
            }
            str[i + new_len + k - old_len] = '\0';

          
            for (k = 0; k < new_len; k++) {
                str[i + k] = new_str[k];
            }

            i += new_len - 1;
        }
    }
}

int main() {
    char str[] = "Hello, world!";
    replace_string(str, "world", "there");
    printf("%s\n", str); // Output: Hello, there!

    return 0;
}
