#include <stdio.h>
#include <string.h>

void find_and_replace(char *source, char *find, char *replace) {
    char *ptr = strstr(source, find);
    if (ptr != NULL) {
        int find_len = strlen(find);
        int replace_len = strlen(replace);
        int diff = replace_len - find_len;
        if (diff > 0) {

            memmove(ptr + replace_len, ptr + find_len, strlen(ptr + find_len) + 1);
        } else if (diff < 0) {

            memmove(ptr + replace_len + 1, ptr + find_len + 1, strlen(ptr + find_len) + 1);
        }
    
        strncpy(ptr, replace, replace_len);
    }
}

int main() {
    char source[100] = "This is test time";
    char find[10] = "is";
    char replace[10] = "was";

    find_and_replace(source, find, replace);

    printf("Output: %s\n", source);

    return 0;
}
