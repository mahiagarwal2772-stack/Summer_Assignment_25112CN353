#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n = 0, choice, i;
    char searchName[50];

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", contacts[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", contacts[n].phone);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No Contacts Available!\n");
                } else {
                    printf("\nContact List:\n");
                    for (i = 0; i < n; i++) {
                        printf("Name: %s\n", contacts[i].name);
                        printf("Phone: %s\n\n", contacts[i].phone);
                    }
                }
                break;

            case 3: {
                int found = 0;

                printf("Enter Name to Search: ");
                scanf(" %[^\n]", searchName);

                for (i = 0; i < n; i++) {
                    int j = 0;
                    while (contacts[i].name[j] == searchName[j] &&
                           contacts[i].name[j] != '\0' &&
                           searchName[j] != '\0') {
                        j++;
                    }

                    if (contacts[i].name[j] == '\0' &&
                        searchName[j] == '\0') {
                        printf("\nContact Found!\n");
                        printf("Name: %s\n", contacts[i].name);
                        printf("Phone: %s\n", contacts[i].phone);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Contact Not Found!\n");
                }
                break;
            }

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}