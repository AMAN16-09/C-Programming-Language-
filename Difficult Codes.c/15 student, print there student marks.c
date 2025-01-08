#include <stdio.h>

#define SUBJECTS 6
#define STUDENTS 15
#define MAX_NAME 50

struct Student {
    int rollNo;
    char name[MAX_NAME];
    int marks[SUBJECTS];
    float percentage;
};
void calculatePercentage(struct Student *student) {
    int total = 0;
    for (int i = 0; i < SUBJECTS; i++) {
        total += student->marks[i];
    }
    student->percentage = (total / (float)(SUBJECTS * 100)) * 100; // Assuming each subject is out of 100
}

int main() {
    struct Student students[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); 
        printf("Enter marks for %d subjects:\n", SUBJECTS);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
        calculatePercentage(&students[i]);
    }
    printf("\nStudents scoring more than 70%%:\n");
    for (int i = 0; i < STUDENTS; i++) {
        if (students[i].percentage > 70) {
            printf("Roll No: %d, Name: %s, Percentage: %.2f%%\n",
                   students[i].rollNo, students[i].name, students[i].percentage);
        }
    }
    return 0;
}
