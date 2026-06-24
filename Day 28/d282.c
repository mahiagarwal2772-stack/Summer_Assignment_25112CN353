#include <stdio.h>

int main() {
    int accNo;
    char name[50];
    float balance = 0, amount;
    int choice;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    while (1) {
        printf("\n===== Bank Account System =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance -= amount;
                    printf("Amount Withdrawn Successfully!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("\nAccount Number: %d\n", accNo);
                printf("Account Holder: %s\n", name);
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank You for Using Bank Account System!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}