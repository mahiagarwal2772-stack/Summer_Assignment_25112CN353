 #include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100];
    int choice = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (choice != 5) {
        printf("\n===== String Operations Menu =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %d\n", strlen(str));
                break;

            case 2:
                strcpy(str2, str);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter another string: ");
                scanf("%s", str2);
                strcat(str, str2);
                printf("Concatenated String = %s\n", str);
                break;

            case 4:
                printf("Enter another string: ");
                scanf("%s", str2);

                if (strcmp(str, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}