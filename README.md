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

