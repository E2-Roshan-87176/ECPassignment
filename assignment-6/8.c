#include <stdio.h>

void printNumberInWords(int number) {
    if (number == 0) {
        printf("Zero");
        return;
    }

    int units = number % 10;
    int tens = (number / 10) % 10;
    int hundreds = (number / 100) % 10;
    int thousands = (number / 1000) % 10;

    // Print thousands
    if (thousands > 0) {
        printf("%d Thousand ", thousands);
    }

    // Print hundreds
    if (hundreds > 0) {
        printf("%d Hundred ", hundreds);
    }

    if (tens == 0) {
        switch (units) {
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
    } else if (tens == 1) {
        switch (units) {
            case 0: printf("Ten"); break;
            case 1: printf("Eleven"); break;
            case 2: printf("Twelve"); break;
            case 3: printf("Thirteen"); break;
            case 4: printf("Fourteen"); break;
            case 5: printf("Fifteen"); break;
            case 6: printf("Sixteen"); break;
            case 7: printf("Seventeen"); break;
            case 8: printf("Eighteen"); break;
            case 9: printf("Nineteen"); break;
        }
    } else {
        switch (tens) {
            case 2: printf("Twenty "); break;
            case 3: printf("Thirty "); break;
            case 4: printf("Forty "); break;
            case 5: printf("Fifty "); break;
            case 6: printf("Sixty "); break;
            case 7: printf("Seventy "); break;
            case 8: printf("Eighty "); break;
            case 9: printf("Ninety "); break;
        }

        switch (units) {
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Number in words: ");
    printNumberInWords(number);

    return 0;
}
