#include <stdio.h>
#include <string.h>

int main() {
    int choice, n = 0, i, found = 0;
    int empId[100], searchId;
    char name[100][50];
    char department[100][50];
    float salary[100];

    while (1) {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &empId[n]);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", name[n]);

            printf("Enter Department: ");
            scanf(" %[^\n]", department[n]);

            printf("Enter Salary: ");
            scanf("%f", &salary[n]);

            n++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No Employee Records Found!\n");
            } else {
                printf("\n----- Employee Records -----\n");
                for (i = 0; i < n; i++) {
                    printf("Employee ID : %d\n", empId[i]);
                    printf("Name        : %s\n", name[i]);
                    printf("Department  : %s\n", department[i]);
                    printf("Salary      : %.2f\n", salary[i]);
                    printf("----------------------------\n");
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &searchId);

            found = 0;

            for (i = 0; i < n; i++) {
                if (empId[i] == searchId) {
                    printf("\nEmployee Found!\n");
                    printf("Employee ID : %d\n", empId[i]);
                    printf("Name        : %s\n", name[i]);
                    printf("Department  : %s\n", department[i]);
                    printf("Salary      : %.2f\n", salary[i]);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Employee Not Found!\n");

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