#include <stdio.h>
#include <string.h>

int roll[100];
char name[100][50];
float marks[100];
int n = 0;

// Function to add student
void addStudent() {
    printf("Enter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[n]);

    printf("Enter Marks: ");
    scanf("%f", &marks[n]);

    n++;
    printf("Student Added Successfully!\n");
}

// Function to display students
void displayStudents() {
    int i;

    if (n == 0) {
        printf("No Records Found!\n");
        return;
    }

    printf("\n----- Student Records -----\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("Marks       : %.2f\n", marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int i, r, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);

    for (i = 0; i < n; i++) {
        if (roll[i] == r) {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Student Not Found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}