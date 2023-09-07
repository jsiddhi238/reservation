#include "railway_reservation.h"
#include <stdio.h>

// Global array to represent seat availability
bool seats[MAX_SEATS];

void initializeSeats() {
    for (int i = 0; i < MAX_SEATS; i++) {
        seats[i] = true;
    }
}

void displayAvailableSeats() {
    printf("Available Seats:\n");
    for (int i = 0; i < MAX_SEATS; i++) {
        if (seats[i]) {
            printf("Seat %d\n", i + 1);
        }
    }
    printf("\n");
}

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
