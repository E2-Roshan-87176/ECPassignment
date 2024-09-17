#include <stdio.h>
#include <string.h>

void accept_student_names(char names[][20], int num_students) {
    printf("Enter the names of %d students:\n", num_students);
    for (int i = 0; i < num_students; i++) {
        scanf("%s", names[i]);
    }
}

void print_student_names(char names[][20], int num_students) {
    printf("Student names:\n");
    for (int i = 0; i < num_students; i++) {
        printf("%s\n", names[i]);
    }
}

void sort_student_names(char names[][20], int num_students) {
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = i + 1; j < num_students; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[20];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[5][20];
    int num_students = 5;

    accept_student_names(names, num_students);
    printf("\n");
    print_student_names(names, num_students);
    printf("\n");

    sort_student_names(names, num_students);
    printf("Sorted student names:\n");
    print_student_names(names, num_students);

    return 0;
}
