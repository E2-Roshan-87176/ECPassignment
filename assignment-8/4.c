#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};


void acceptStudentInfo(struct Student *student);
void printStudentInfo(struct Student student);
void acceptStudentArray(struct Student students[], int n);
int searchByRollNo(struct Student students[], int n, int roll_no);
int searchByName(struct Student students[], int n, const char *name);

void acceptStudentInfo(struct Student *student) {
    printf("Enter roll number: ");
    scanf("%d", &student->roll_no);
    printf("Enter name: ");

    getchar();
    fgets(student->name, sizeof(student->name), stdin);

    size_t len = strlen(student->name);
    if (len > 0 && student->name[len - 1] == '\n') {
        student->name[len - 1] = '\0';
    }
    printf("Enter marks: ");
    scanf("%f", &student->marks);
}

void printStudentInfo(struct Student student) {
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
}

void acceptStudentArray(struct Student students[], int n) {
    printf("Enter information for %d students:\n", n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        acceptStudentInfo(&students[i]);
    }
}

int searchByRollNo(struct Student students[], int n, int roll_no) {
    for (int i = 0; i < n; i++) {
        if (students[i].roll_no == roll_no) {
            return i;
        }
    }
    return -1;
}

int searchByName(struct Student students[], int n, const char *name) {
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student *students = malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    acceptStudentArray(students, n);

    int choice;
    printf("\nChoose search method:\n");
    printf("1. Search by roll number\n");
    printf("2. Search by name\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int roll_no;
        printf("Enter roll number to search: ");
        scanf("%d", &roll_no);

        int index = searchByRollNo(students, n, roll_no);
        if (index != -1) {
            printf("Student found:\n");
            printStudentInfo(students[index]);
        } else {
            printf("Student not found.\n");
        }
    } else if (choice == 2) {
        char name[50];
        printf("Enter name to search: ");
        
        getchar();
        fgets(name, sizeof(name), stdin);
        
        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }

        int index = searchByName(students, n, name);
        if (index != -1) {
            printf("Student found:\n");
            printStudentInfo(students[index]);
        } else {
            printf("Student not found.\n");
        }
    } else {
        printf("Invalid choice.\n");
    }

   
    free(students);

    return 0;
}

