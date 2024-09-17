#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
};

void sortStudentsByRollNo(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].rollNo > students[j + 1].rollNo) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}


void sortStudentsByName(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcasecmp(students[j].name, students[j + 1].name) > 0) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Student students[5];

  
    for (int i = 0; i < 5; i++) {
        printf("Enter roll number and name for student %d: ", i + 1);
        scanf("%d %s", &students[i].rollNo, students[i].name);
    }


    sortStudentsByRollNo(students, 5);
    printf("\nStudents sorted by roll number:\n");
    for (int i = 0; i < 5; i++) {
        printf("Roll No: %d, Name: %s\n", students[i].rollNo, students[i].name);
    }

    sortStudentsByName(students, 5);
    printf("\nStudents sorted by name:\n");
    for (int i = 0; i < 5; i++) {
        printf("Roll No: %d, Name: %s\n", students[i].rollNo, students[i].name);
    }

    return 0;
}
