#include <stdio.h>

// Custom strlen function
size_t strlen(const char* str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Custom strcpy function
char* strcpy(char *dest, const char *src) {
    size_t i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// Custom strcat function
char* strcat(char *dest, const char *src) {
    size_t i = strlen(dest);
    size_t j = 0;
    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}

// Custom strcmp function
int strcmp(const char *str1, const char *str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return (unsigned char)*str1 - (unsigned char)*str2;
}

// Custom strcasecmp function for case-insensitive comparison
int strcasecmp(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        char c1 = (*str1 >= 'A' && *str1 <= 'Z') ? *str1 + ('a' - 'A') : *str1;
        char c2 = (*str2 >= 'A' && *str2 <= 'Z') ? *str2 + ('a' - 'A') : *str2;
        if (c1 != c2) {
            return c1 - c2;
        }
        str1++;
        str2++;
    }
    return (unsigned char)*str1 - (unsigned char)*str2;
}

// Custom strrev function
char* strrev(char* str) {
    size_t i = 0;
    size_t j = strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

// Custom strchr function
char* strchr(const char *str, int ch) {
    while (*str != '\0') {
        if (*str == (char)ch) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}

// Custom strncmp function
int strncmp(const char *str1, const char *str2, size_t n) {
    while (n-- && *str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    if (n == (size_t)-1) return 0;
    return (unsigned char)*str1 - (unsigned char)*str2;
}

// Custom strstr function
char* strstr(const char *str, const char *substr) {
    size_t len = strlen(substr);
    while (*str) {
        if (strncmp(str, substr, len) == 0) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
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

    // e. strcasecmp() (used instead of stricmp())
    printf("Case-insensitive comparison result: %d\n", strcasecmp(str1, str2));

    // f. strrev()
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

