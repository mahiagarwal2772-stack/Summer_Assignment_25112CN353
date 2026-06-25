#include <stdio.h>

int main() {
    int arr[100], n, i;
    int choice = 0;
    int sum, max, min, search, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(choice != 6) {
        printf("\n===== Array Operations Menu =====\n");
        printf("1. Display Array\n");
        printf("2. Find Sum of Elements\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Search an Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Largest Element = %d\n", max);
                break;

            case 4:
                min = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < min)
                        min = arr[i];
                }
                printf("Smallest Element = %d\n", min);
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &search);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == search) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Element not found.\n");
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}