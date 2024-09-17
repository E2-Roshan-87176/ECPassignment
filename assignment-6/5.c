#include <stdio.h>

int atoi(const char* string) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Check for sign
    if (string[0] == '-') {
        sign = -1;
        i++;
    }

    // Convert digits to numeric value
    while (string[i] >= '0' && string[i] <= '9') {
        result = result * 10 + (string[i] - '0');
        i++;
    }

    return result * sign;
}

int main() {
    const char* str = "123";
    int num = atoi(str);
    printf("The numeric equivalent of \"%s\" is %d\n", str, num);
    return 0;
}
