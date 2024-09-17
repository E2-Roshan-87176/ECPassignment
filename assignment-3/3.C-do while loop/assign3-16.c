#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int magicNumber, userGuess, chances = 10;

    srand(time(NULL));
    
    magicNumber = rand() % 1000 + 1;

    printf("Welcome to 'Guess the Magic Number' game!\n");
    printf("I have selected a number between 1 and 1000.\n");
    printf("You have %d chances to guess it.\n", chances);

    do {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        if (userGuess < magicNumber) {
            printf("Too low! Try again.\n");
        } else if (userGuess > magicNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congrats! You won.\n");
            break;
        }

        chances--;
        if (chances > 0) {
            printf("You have %d chances left.\n", chances);
        } else {
            printf("Sorry, you have no more chances. The magic number was %d.\n", magicNumber);
        }

    } while (chances > 0 && userGuess != magicNumber);

    return 0;
}

