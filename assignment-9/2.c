#include <stdio.h>

void copyFile(FILE *sourceFile, FILE *destFile) {
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
}

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char data[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%99s", sourceFileName);

    printf("Enter destination file name: ");
    scanf("%99s", destFileName);

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

    copyFile(sourceFile, destFile);


    fclose(sourceFile);

    printf("\nContents of destination file:\n");
    fseek(destFile, 0, SEEK_SET); 
    while ((ch = fgetc(destFile)) != EOF) {
        putchar(ch);
    }

    printf("\nEnter data to write to destination file: ");
    scanf("%99s", data); 
    fprintf(destFile, "%s\n", data);

    fclose(destFile);

    return 0;
}

