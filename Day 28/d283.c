 #include <stdio.h>

int main() {
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    while (1) {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);

                if (bookedSeats + seats <= totalSeats) {
                    bookedSeats += seats;
                    printf("%d Ticket(s) Booked Successfully!\n", seats);
                } else {
                    printf("Not enough seats available!\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n", totalSeats - bookedSeats);
                printf("Booked Seats: %d\n", bookedSeats);
                break;

            case 3:
                printf("Enter number of seats to cancel: ");
                scanf("%d", &seats);

                if (seats <= bookedSeats) {
                    bookedSeats -= seats;
                    printf("%d Ticket(s) Cancelled Successfully!\n", seats);
                } else {
                    printf("Invalid number of tickets!\n");
                }
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