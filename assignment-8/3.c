#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

void acceptStudentInfo(struct Student *student);
void printStudentInfo(struct Student student);

void acceptStudentArray(struct Student students[], int n) {
    printf("Enter information for %d students:\n", n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        acceptStudentInfo(&students[i]);
    }
}


void printStudentArray(struct Student students[], int n) {
    printf("\nStudent Information:\n");

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printStudentInfo(students[i]);
    }
}


void acceptStudentInfo(struct Student *student) {
    printf("Enter roll number: ");
    scanf("%d", &student->roll_no);
    printf("Enter name: ");
    
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

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);


    struct Student students[n];

    acceptStudentArray(students, n);
    printStudentArray(students, n);

    return 0;
}

