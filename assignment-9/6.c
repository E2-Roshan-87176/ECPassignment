#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum MenuOption {
    ADD_STUDENT = 1,
    READ_STUDENTS,
    SEARCH_BY_ROLL,
    SEARCH_BY_NAME,
    MODIFY_STUDENT,
    REMOVE_STUDENT,
    EXIT
};

struct Student {
    int rollno;
    char name[50];
    float marks;
};

void writeStudentRecord(FILE *file, struct Student student) {
    fwrite(&student, sizeof(student), 1, file);
}

void readStudentRecords(FILE *file) {
    struct Student student;

    while (fread(&student, sizeof(student), 1, file) == 1) {
        printf("Roll No: %d\n", student.rollno);
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n\n", student.marks);
    }
}

void searchByRoll(FILE *file, int rollno) {
    struct Student student;
    int found = 0;

    while (fread(&student, sizeof(student), 1, file) == 1) {
        if (student.rollno == rollno) {
            printf("Roll No: %d\n", student.rollno);
            printf("Name: %s\n", student.name);
            printf("Marks: %.2f\n\n", student.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", rollno);
    }
}

void searchByName(FILE *file, const char *name) {
    struct Student student;
    int found = 0;

    while (fread(&student, sizeof(student), 1, file) == 1) {
        if (strcmp(student.name, name) == 0) {
            printf("Roll No: %d\n", student.rollno);
            printf("Name: %s\n", student.name);
            printf("Marks: %.2f\n\n", student.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name %s not found.\n", name);
    }
}

void modifyStudent(FILE *file, int rollno) {
    struct Student student;
    int found = 0;

    while (fread(&student, sizeof(student), 1, file) == 1) {
        if (student.rollno == rollno) {
            printf("Enter new name: ");
            scanf("%s", student.name);
            printf("Enter new marks: ");
            scanf("%f", &student.marks);

            fseek(file, -sizeof(student), SEEK_CUR);
            fwrite(&student, sizeof(student), 1, file);
            printf("Student record modified.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", rollno);
    }
}

void removeStudent(FILE *file, int rollno) {
    struct Student student;
    int found = 0;
    FILE *tempFile = fopen("temp.dat", "wb");

    if (tempFile == NULL) {
        printf("Error creating temporary file.\n");
        return;
    }

    while (fread(&student, sizeof(student), 1, file) == 1) {
        if (student.rollno != rollno) {
            fwrite(&student, sizeof(student), 1, tempFile);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum MenuOption {
    ADD_STUDENT = 1,
    READ_STUDENTS,
    SEARCH_BY_ROLL,
    SEARCH_BY_NAME,
    MODIFY_STUDENT,
    REMOVE_STUDENT,
    EXIT
};

struct Student {
    int rollno;
    char name[50];
    float marks;
};

void writeStudentRecord(FILE *file, struct Student student) {
    fwrite(&student, sizeof(student), 1, file);
}

void readStudentRecords(FILE *file) {
    struct Student student;

    while (fread(&student, sizeof(student), 1, file) == 1) {
        printf("Roll No: %d\n", student.rollno);
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n\n", student.marks);
    }
}

void searchByRoll(FILE *file, int rollno) {
    struct Student student;
    int found = 0;

    while (fread(&student, sizeof(student), 1, file) == 1) {
        if (student.rollno == rollno) {
            printf("Roll No: %d\n", student.rollno);
            printf("Name: %s\n", student.name);
            printf("Marks: %.2f\n\n", student.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", rollno);
    }
}

void searchByName(FILE *file, const char *name) {
    struct Student student;
    int found = 0;

    while (fread(&student, sizeof(student), 1, file) == 1) {
        if (strcmp(student.name, name) == 0) {
            printf("Roll No: %d\n", student.rollno);
            printf("Name: %s\n", student.name);
            printf("Marks: %.2f\n\n", student.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name %s not found.\n", name);
    }
}

void modifyStudent(FILE *file, int rollno) {
    struct Student student;
    int found = 0;

    while (fread(&student, sizeof(student), 1, file) == 1) {
        if (student.rollno == rollno) {
            printf("Enter new name: ");
            scanf("%s", student.name);
            printf("Enter new marks: ");
            scanf("%f", &student.marks);

            fseek(file, -sizeof(student), SEEK_CUR);
            fwrite(&student, sizeof(student), 1, file);
            printf("Student record modified.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", rollno);
    }
}

void removeStudent(FILE *file, int rollno) {
    struct Student student;
    int found = 0;
    FILE *tempFile = fopen("temp.dat", "wb");

    if (tempFile == NULL) {
        printf("Error creating temporary file.\n");
        return;
    }

    while (fread(&student, sizeof(student), 1, file) == 1) {
        if (student.rollno != rollno) {
            fwrite(&student, sizeof(student), 1, tempFile);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found) {
        printf("Student record removed.\n");
    } else {
        printf("Student with roll number %d not found.\n", rollno);
    }
}

int main() {
    FILE *file;
    int choice;
    struct Student student;

    file = fopen("students.dat", "rb+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. Read Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Modify Student\n");
        printf("6. Remove Student\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case ADD_STUDENT:
                printf("Enter roll number: ");
                scanf("%d", &student.rollno);
                printf("Enter name: ");
                scanf("%s", student.name);
                printf("Enter marks: ");
                scanf("%f", &student.marks);
                fseek(file, 0, SEEK_END);
                writeStudentRecord(file, student);
                printf("Student record added.\n");
                break;
            case READ_STUDENTS:
                printf("\nStudent Records:\n");
                fseek(file, 0, SEEK_SET);
                readStudentRecords(file);
                break;
            case SEARCH_BY_ROLL:
                printf("Enter roll number to search: ");
                scanf("%d", &student.rollno);
                fseek(file, 0, SEEK_SET);
                searchByRoll(file, student.rollno);
                break;
            case SEARCH_BY_NAME:
                printf("Enter name to search: ");
                scanf("%s", student.name);
                fseek(file, 0, SEEK_SET);
                searchByName(file, student.name);
                break;
            case MODIFY_STUDENT:
                printf("Enter roll number to modify: ");
                scanf("%d", &student.rollno);
                fseek(file, 0, SEEK_SET);
                modifyStudent(file, student.rollno);
                break;
            case REMOVE_STUDENT:
                printf("Enter roll number to remove: ");
                scanf("%d", &student.rollno);
                fseek(file, 0, SEEK_SET);
                removeStudent(file, student.rollno);
                break;
            case EXIT:
                fclose(file);
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found) {
        printf("Student record removed.\n");
    } else {
        printf("Student with roll number %d not found.\n", rollno);
    }
}

int main() {
    FILE *file;
    int choice;
    struct Student student;

    file = fopen("students.dat", "rb+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. Read Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Modify Student\n");
        printf("6. Remove Student\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case ADD_STUDENT:
                printf("Enter roll number: ");
                scanf("%d", &student.rollno);
                printf("Enter name: ");
                scanf("%s", student.name);
                printf("Enter marks: ");
                scanf("%f", &student.marks);
                fseek(file, 0, SEEK_END);
                writeStudentRecord(file, student);
                printf("Student record added.\n");
                break;
            case READ_STUDENTS:
                printf("\nStudent Records:\n");
                fseek(file, 0, SEEK_SET);
                readStudentRecords(file);
                break;
            case SEARCH_BY_ROLL:
                printf("Enter roll number to search: ");
                scanf("%d", &student.rollno);
                fseek(file, 0, SEEK_SET);
                searchByRoll(file, student.rollno);
                break;
            case SEARCH_BY_NAME:
                printf("Enter name to search: ");
                scanf("%s", student.name);
                fseek(file, 0, SEEK_SET);
                searchByName(file, student.name);
                break;
            case MODIFY_STUDENT:
                printf("Enter roll number to modify: ");
                scanf("%d", &student.rollno);
                fseek(file, 0, SEEK_SET);
                modifyStudent(file, student.rollno);
                break;
            case REMOVE_STUDENT:
                printf("Enter roll number to remove: ");
                scanf("%d", &student.rollno);
                fseek(file, 0, SEEK_SET);
                removeStudent(file, student.rollno);
                break;
            case EXIT:
                fclose(file);
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
