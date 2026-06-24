#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

int main() {
    struct Book books[100];
    int n = 0, choice, i;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[n].id);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", books[n].name);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", books[n].author);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nBook Records:\n");
                    for (i = 0; i < n; i++) {
                        printf("ID: %d\n", books[i].id);
                        printf("Name: %s\n", books[i].name);
                        printf("Author: %s\n\n", books[i].author);
                    }
                }
                break;

            case 3: {
                int searchId, found = 0;

                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++) {
                    if (books[i].id == searchId) {
                        printf("\nBook Found!\n");
                        printf("ID: %d\n", books[i].id);
                        printf("Name: %s\n", books[i].name);
                        printf("Author: %s\n", books[i].author);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found.\n");
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