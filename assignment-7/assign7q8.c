#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i, j;
    char *temp;

    // Check if there are enough arguments
    if (argc < 2) {
        printf("Usage: ./program <name1> <name2> ...\n");
        return 1;
    }

    // Sort the names using bubble sort
    for (i = 1; i < argc - 1; i++) {
        for (j = i + 1; j < argc; j++) {
            if (strcmp(argv[i], argv[j]) > 0) {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }

    // Print the sorted names
    printf("Sorted names:\n");
    for (i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
