#include <stdio.h>

int main() {
    int month, year, days;

    
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    
    printf("Enter year: ");
    scanf("%d", &year);

   
    if (month < 1 || month > 12) {
        printf("Invalid month. Please enter a value between 1 and 12.\n");
    } else {
      
        int is_leap_year = 0;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            is_leap_year = 1;
        }

        if (month == 1) {
            days = 31;  // January
        } else if (month == 2) {
            if (is_leap_year) {
                days = 29;  // Feb in a leap year
                total_days=366;
            } else {
                days = 28;  // Feb in a non-leap year
                total_days=365;
            }
        } else if (month == 3) {
            days = 31;  // March
        } else if (month == 4) {
            days = 30;  // April
        } else if (month == 5) {
            days = 31;  // May
        } else if (month == 6) {
            days = 30;  // June
        } else if (month == 7) {
            days = 31;  // July
        } else if (month == 8) {
            days = 31;  // August
        } else if (month == 9) {
            days = 30;  // September
        } else if (month == 10) {
            days = 31;  // October
        } else if (month == 11) {
            days = 30;  // November
        } else if (month == 12) {
            days = 31;  // December
        }
        
        printf("Number of days: %d\n", days);
    }

    return 0;
}

