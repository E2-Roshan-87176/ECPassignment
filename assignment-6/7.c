#include <stdio.h>
#include <string.h>

// Function to convert a decimal number to its Roman equivalent
void decimalToRoman(int number) {
    int digits[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char symbols[] = "M CM D CD C XC L XL X IX V IV I";

    int i = 0;
    while (number > 0) {
        while (number >= digits[i]) {
            printf("%s", &symbols[i * 2]);
            number -= digits[i];
        }
        i++;
    }
}

// Function to convert a Roman number to its decimal equivalent
int romanToDecimal(char roman[]) {
    int length = strlen(roman);
    int result = 0;

    for (int i = 0; i < length; i++) {
        int value = 0;
        switch (roman[i]) {
            case 'M': value = 1000; break;
            case 'D': value = 500; break;
            case 'C': value = 100; break;
            case 'L': value = 50; break;
            case 'X': value = 10; break;
            case 'V': value = 5; break;
            case 'I': value = 1; break;
            default: printf("Invalid Roman numeral!\n"); return 0;
        }

        if (i < length - 1 && value < romanToDecimal(roman + i + 1)) {
            result -= value;
        } else {
            result += value;
        }
    }

    return result;
}

int main() {
    int decimalNumber;
    char romanNumber[100];

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    printf("Roman equivalent: ");
    decimalToRoman(decimalNumber);
    printf("\n");

    printf("Enter a Roman number: ");
    scanf("%s", romanNumber);
    printf("Decimal equivalent: %d\n", romanToDecimal(romanNumber));

    return 0;
}
