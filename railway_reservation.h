#ifndef RAILWAY_RESERVATION_H
#define RAILWAY_RESERVATION_H

#include <stdbool.h>

#define MAX_SEATS 50

void initializeSeats();
void displayAvailableSeats();
void bookSeat(int seatNumber);
void cancelSeat(int seatNumber);

#endif /* RAILWAY_RESERVATION_H */
