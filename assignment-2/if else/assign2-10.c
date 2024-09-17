#include <stdio.h>

int main() {
    char c;

    printf("Enter a single character: ");  
    scanf("%c", &c);

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        
        if (c >= 65 && c <= 90) {
            printf("UPPERCASE: c is an uppercase letter (65 to 90)\n");
        }
        
        else {
            printf("LOWERCASE: c is a lowercase letter (97 to 122)\n");
        }
    }
    
    else if (c >= 48 && c <= 57) {
        printf("DIGIT: c is a digit (48 to 57)\n");
    }
    
    else if (c == 32 || c == 9 || c == 13 || c == 10) {
        printf("SPACE: c is a space (32), tab (9), carriage return (13), new line (10)\n");
    }
                  
    else {
        printf("OTHER: Not listed above\n");
    }

    return 0;
}

