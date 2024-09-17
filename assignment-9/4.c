#include <stdio.h>
#include <string.h>

void copyFileLineByLine(FILE *sourceFile, FILE *destFile) {
    char line[1024];

    while (fgets(line, sizeof(line), sourceFile) != NULL) {
        fputs(line, destFile);
    }
}

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destFile;

    if (argc != 3) {
        printf("Usage: %s file.txt file1.txt\n", argv[0]);
        return 1;
    }

    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    destFile = fopen(argv[2], "w");
    if (destFile == NULL) {
        printf("Error creating destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    copyFileLineByLine(sourceFile, destFile);

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");

    return 0;
}
