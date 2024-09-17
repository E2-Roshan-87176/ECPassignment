#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int class;
    char result[3]; 
};

int main() {
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Class: ");
        scanf("%d", &students[i].class);

        if (students[i].class <= 4) {
            printf("Result (A, B, C): ");
            scanf("%s", students[i].result);
        } else {
            printf("Result (percentage): ");
            scanf("%s", students[i].result); 
        }
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Class: %d\n", students[i].class);

        if (students[i].class <= 4) {
            printf("Result: %s\n", students[i].result);
        } else {
            printf("Result: %s%%\n", students[i].result);
        }
    }

    return 0;
}
