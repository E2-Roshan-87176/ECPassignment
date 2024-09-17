#include <stdio.h>
#include <stdbool.h>

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int daysInMonth(int month, int year) {
    
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (month < 1 || month > 12) {
        printf("Invalid month. Month must be between 1 and 12.\n");
        return -1;
    }
    
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    
    return days[month - 1];
}

int main() {
    int year, month;
    
    printf("Enter a year to check if it's a leap year: ");
    scanf("%d", &year);
    
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    
    printf("Enter a month (1-12) and a year to get the number of days: ");
    scanf("%d %d", &month, &year);
    
    int days = daysInMonth(month, year);
    
    if (days != -1) { 
        printf("Number of days in month %d of year %d: %d\n", month, year, days);
    }
    
    return 0;
}

