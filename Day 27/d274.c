#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[5];
    float total;
    float percentage;
};

int main() {
    struct Student s;
    int i;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
    }

    s.total = 0;
    for(i = 0; i < 5; i++) {
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5;

    printf("\n===== MARKSHEET =====\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);

    printf("\nMarks:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d : %.2f\n", i + 1, s.marks[i]);
    }

    printf("\nTotal       : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);

    if(s.percentage >= 90)
        printf("Grade       : A+\n");
    else if(s.percentage >= 80)
        printf("Grade       : A\n");
    else if(s.percentage >= 70)
        printf("Grade       : B\n");
    else if(s.percentage >= 60)
        printf("Grade       : C\n");
    else if(s.percentage >= 50)
        printf("Grade       : D\n");
    else
        printf("Grade       : F\n");

    return 0;
}