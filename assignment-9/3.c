#include <stdio.h>
#include <string.h>

void copyFileLineByLine(FILE *sourceFile, FILE *destFile) {
    char line[1024];

    while (fgets(line, sizeof(line), sourceFile) != NULL) {
        fputs(line, destFile);
    }
}

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];

    printf("Enter source file name: ");
    scanf("%s", sourceFileName);

    printf("Enter destination file name: ");
    scanf("%s", destFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    destFile = fopen(destFileName, "w");
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
