#include "railway_reservation.h"

int main() {
    int choice, seatNumber;

    // Initialize available seats
    initializeSeats();

    do {
        printf("Railway Reservation System\n");
        printf("1. Display available seats\n");
        printf("2. Book a seat\n");
        printf("3. Cancel a reservation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAvailableSeats();
                break;
            case 2:
                printf("Enter seat number to book: ");
                scanf("%d", &seatNumber);
                bookSeat(seatNumber);
                break;
            case 3:
                printf("Enter seat number to cancel reservation: ");
                scanf("%d", &seatNumber);
                cancelSeat(seatNumber);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
