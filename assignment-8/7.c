#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    unsigned char standard : 4; 
    unsigned char gender : 1; 
    unsigned char age : 5; 
};

int main() {
    struct Student students[3];

   
    for (int i = 0; i < 3; i++) {
        printf("Enter information for student %d:\n", i + 1);

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        printf("Standard (1-12): ");
        unsigned int standard;
        scanf("%u", &standard);
 
        if (standard < 1 || standard > 12) {
            printf("Invalid standard. Setting to 0.\n");
            standard = 0;
        }
        students[i].standard = (unsigned char)standard;

        printf("Gender (0 for male, 1 for female): ");
        unsigned int gender;
        scanf("%u", &gender);
      
        if (gender != 0 && gender != 1) {
            printf("Invalid gender. Setting to 0 (male).\n");
            gender = 0;
        }
        students[i].gender = (unsigned char)gender;

        printf("Age (0-31): ");
        unsigned int age;
        scanf("%u", &age);
        
        if (age > 31) {
            printf("Invalid age. Setting to 0.\n");
            age = 0;
        }
        students[i].age = (unsigned char)age;


        while (getchar() != '\n');
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Standard: %u\n", students[i].standard);
        printf("Gender: %s\n", students[i].gender ? "Female" : "Male");
        printf("Age: %u\n", students[i].age);
    }

    return 0;
}

