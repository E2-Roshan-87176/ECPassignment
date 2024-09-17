#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average;

    printf("Enter marks for five subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = (float)total / 5;

    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}
