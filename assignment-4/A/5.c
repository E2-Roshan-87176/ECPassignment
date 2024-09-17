#include <stdio.h>

// Function to print a character 'ch' 'count' times
void print_char_n_times(char ch, int count) {
    // Check if the count is positive
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            putchar(ch); 
        }
        putchar('\n'); 
    } else {
        printf("Error: Count must be positive.\n");
    }
}

int main() {
    char character;
    int times;
    
    printf("Enter a character to print: ");
    scanf(" %c", &character);  
    
    printf("Enter the number of times to print the character: ");
    scanf("%d", &times);

    
    print_char_n_times(character, times);

    return 0;
}

