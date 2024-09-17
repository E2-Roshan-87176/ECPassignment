#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

void writeStudentRecord(FILE *file, struct Student student) {
    fprintf(file, "%d %s %.2f\n", student.rollno, student.name, student.marks);
}

void readStudentRecords(FILE *file) {
    struct Student student;

    while (fscanf(file, "%d %s %f", &student.rollno, student.name, &student.marks) != EOF) {
        printf("Roll No: %d\n", student.rollno);
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n\n", student.marks);
    }
}

int main() {
    FILE *file;
    struct Student student;

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    student.rollno = 1;
    strcpy(student.name, "Roshan");
    student.marks = 95.5;
    writeStudentRecord(file, student);

    student.rollno = 2;
    strcpy(student.name, "Sachin");
    student.marks = 88.0;
    writeStudentRecord(file, student);

    fclose(file);


    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    readStudentRecords(file);

    fclose(file);

    return 0;
}
