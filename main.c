#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks[3];
};

char getGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 50) return 'C';
    else return 'F';
}

int main() {
    struct Student s;
    float total = 0, average;

    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        total += s.marks[i];
    }

    average = total / 3;

    printf("\n--- Student Report ---\n");
    printf("Name: %s", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", getGrade(average));

    return 0;
}
