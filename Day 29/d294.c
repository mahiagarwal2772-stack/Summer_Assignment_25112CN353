#include <stdio.h>

int main() {
    int id[100], qty[100];
    int n = 0, choice, searchId, i, found;

    while (choice != 4) {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &id[n]);

                printf("Enter Quantity: ");
                scanf("%d", &qty[n]);

                n++;
                printf("Product Added Successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No products available.\n");
                } else {
                    printf("\nProduct ID\tQuantity\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t\t%d\n", id[i], qty[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to search: ");
                scanf("%d", &searchId);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (id[i] == searchId) {
                        printf("Product Found!\n");
                        printf("Product ID: %d\n", id[i]);
                        printf("Quantity: %d\n", qty[i]);
                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("Product not found.\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}