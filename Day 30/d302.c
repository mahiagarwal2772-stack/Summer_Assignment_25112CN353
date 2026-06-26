#include <stdio.h>
#include <string.h>

int main() {
    int choice, n = 0, i, found = 0;
    int bookId[100];
    char title[100][50];
    char author[100][50];
    int searchId;

    while (1) {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &bookId[n]);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", title[n]);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", author[n]);

            n++;
            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No Books Available!\n");
            } else {
                printf("\n----- Book Records -----\n");
                for (i = 0; i < n; i++) {
                    printf("Book ID : %d\n", bookId[i]);
                    printf("Title   : %s\n", title[i]);
                    printf("Author  : %s\n", author[i]);
                    printf("-------------------------\n");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &searchId);

            found = 0;

            for (i = 0; i < n; i++) {
                if (bookId[i] == searchId) {
                    printf("\nBook Found!\n");
                    printf("Book ID : %d\n", bookId[i]);
                    printf("Title   : %s\n", title[i]);
                    printf("Author  : %s\n", author[i]);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Book Not Found!\n");

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