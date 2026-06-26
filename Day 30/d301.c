#include <stdio.h>
#include <string.h>

int main() {
    int choice, n = 0, i, roll, found = 0;

    int rollNo[100];
    char name[100][50];
    float marks[100];

    while (1) {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &rollNo[n]);

            printf("Enter Name: ");
            scanf(" %[^\n]", name[n]);

            printf("Enter Marks: ");
            scanf("%f", &marks[n]);

            n++;
            printf("Student Record Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No records found.\n");
            } else {
                printf("\nStudent Records:\n");
                printf("---------------------------------\n");
                for (i = 0; i < n; i++) {
                    printf("Roll No : %d\n", rollNo[i]);
                    printf("Name    : %s\n", name[i]);
                    printf("Marks   : %.2f\n", marks[i]);
                    printf("---------------------------------\n");
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++) {
                if (rollNo[i] == roll) {
                    printf("\nStudent Found!\n");
                    printf("Roll No : %d\n", rollNo[i]);
                    printf("Name    : %s\n", name[i]);
                    printf("Marks   : %.2f\n", marks[i]);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Record Not Found!\n");

            break;

        case 4:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}