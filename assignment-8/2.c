#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

void acceptStudentInfo(struct Student *student) {
    printf("Enter student information:\n");

    printf("Roll Number: ");
    scanf("%d", &student->roll_no);

    printf("Name: ");
    scanf("%s", student->name);

    printf("Marks: ");
    scanf("%f", &student->marks);
}

void printStudentInfo(struct Student student) {
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    struct Student student;

    acceptStudentInfo(&student);
    printStudentInfo(student);

    return 0;
}
