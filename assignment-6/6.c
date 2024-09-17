#include <stdio.h>

void itoa(int num, char* str, int base) {
    int i = 0, isNegative = 0;

   
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

  
    do {
        str[i++] = (num % base) < 10 ? (num % base) + '0' : (num % base) - 10 + 'A';
        num /= base;
    } while (num > 0);

  
    if (isNegative) {
        str[i++] = '-';
    }

    str[i] = '\0';
    int j = i - 1;
    for (int k = 0; k < j; k++, j--) {
        char temp = str[k];
        str[k] = str[j];
        str[j] = temp;
    }
}

int main() {
    int num = 12345;
    char str[20];
    itoa(num, str, 10);
    printf("Number in string format: %s\n", str);
    return 0;
}
