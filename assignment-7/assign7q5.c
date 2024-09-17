#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void accept_student_names(char **names, int num_students) {
    printf("Enter the names of %d students:\n", num_students);
    for (int i = 0; i < num_students; i++) {
        names[i] = (char *)malloc(sizeof(char) * 20); // Assuming maximum name length is 20
        scanf("%s", names[i]);
    }
}

void print_student_names(char **names, int num_students) {
    printf("Student names:\n");
    for (int i = 0; i < num_students; i++) {
        printf("%s\n", names[i]);
    }
}

void sort_student_names(char **names, int num_students) {
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = i + 1; j < num_students; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char *temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

void free_student_names(char **names, int num_students) {
    for (int i = 0; i < num_students; i++) {
        free(names[i]);
    }
}

int main() {
    char *names[5];
    int num_students = 5;

    accept_student_names(names, num_students);
    printf("\n");
    print_student_names(names, num_students);
    printf("\n");

    sort_student_names(names, num_students);
    printf("Sorted student names:\n");
    print_student_names(names, num_students);
    printf("\n");

    free_student_names(names, num_students);

    return 0;
}
