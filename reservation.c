#include <stdio.h>
#include <stdbool.h>

#define MAX_SEATS 50

// Global array to represent seat availability
bool seats[MAX_SEATS];

// Initialize all seats as available
void initializeSeats() {
    for (int i = 0; i < MAX_SEATS; i++) {
        seats[i] = true;
    }
}

// Display available seats
void displayAvailableSeats() {
    printf("Available Seats:\n");
    for (int i = 0; i < MAX_SEATS; i++) {
        if (seats[i]) {
            printf("Seat %d\n", i + 1);
        }
    }
    printf("\n");
}

// Reserve a seat
void bookSeat(int seatNumber) {
    if (seatNumber >= 1 && seatNumber <= MAX_SEATS) {
        if (seats[seatNumber - 1]) {
            seats[seatNumber - 1] = false;
            printf("Seat %d booked successfully!\n", seatNumber);
        } else {
            printf("Seat %d is already booked.\n", seatNumber);
        }
    } else {
        printf("Invalid seat number.\n");
    }
}

// Cancel a reservation
void cancelSeat(int seatNumber) {
    if (seatNumber >= 1 && seatNumber <= MAX_SEATS) {
        if (!seats[seatNumber - 1]) {
            seats[seatNumber - 1] = true;
            printf("Reservation for seat %d canceled.\n", seatNumber);
        } else {
            printf("Seat %d is not booked.\n", seatNumber);
        }
    } else {
        printf("Invalid seat number.\n");
    }
}

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
