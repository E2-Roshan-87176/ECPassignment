#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strrev(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str1[] = "Hello, world!";
    char str2[] = "How are you?";
    char str3[100]; 
    char str4[100]; 
    
    // a. strlen()
    printf("Length of str1: %lu\n", strlen(str1));

    // b. strcpy()
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // c. strcat()
    strcat(str3, str2);
    printf("Concatenated string: %s\n", str3);

    // d. strcmp()
    printf("Comparison result of str1 and str2: %d\n", strcmp(str1, str2));

    // e. strcasecmp() (use this instead of stricmp())
    printf("Case-insensitive comparison result: %d\n", strcasecmp(str1, str2));

    // f. strrev() (custom implementation)
    strrev(str1);
    printf("Reversed string: %s\n", str1);

    // g. strchr()
    char *ptr = strchr(str1, 'w');
    if (ptr != NULL) {
        printf("Character 'w' found at: %s\n", ptr);
    } else {
        printf("Character 'w' not found.\n");
    }

    // h. strstr()
    char *ptr2 = strstr(str3, "world");
    if (ptr2 != NULL) {
        printf("Substring 'world' found at: %s\n", ptr2);
    } else {
        printf("Substring 'world' not found.\n");
    }

    // i. strncpy()
    strncpy(str4, str1, 5);
    str4[5] = '\0';
    printf("strncpy: %s\n", str4);

    // j. strncat()
    strncat(str4, str2, 6);
    printf("strncat: %s\n", str4);

    // k. strncmp()
    printf("strncmp result: %d\n", strncmp(str1, str2, 5));

    return 0;
}

