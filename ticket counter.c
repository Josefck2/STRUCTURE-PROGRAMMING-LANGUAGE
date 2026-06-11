#include <stdio.h>
#include <string.h>

int main()
{
    char passengerName[50];
    int busNo;
    int totalSeats = 40;
    int bookedSeats = 0;
    int seats, choice;
    float fare = 500.0, totalBill;

    while (1)
    {
        printf("\n====== BUS TICKET COUNTER ======\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Passenger Name: ");
            scanf(" %[^\n]", passengerName);

            printf("Enter Bus Number: ");
            scanf("%d", &busNo);

            printf("Number of Seats: ");
            scanf("%d", &seats);

            if (bookedSeats + seats <= totalSeats)
            {
                bookedSeats += seats;
                totalBill = seats * fare;

                printf("\n===== TICKET DETAILS =====\n");
                printf("Passenger Name : %s\n", passengerName);
                printf("Bus Number     : %d\n", busNo);
                printf("Seats Booked   : %d\n", seats);
                printf("Ticket Price   : %.2f Taka\n", fare);
                printf("Total Bill     : %.2f Taka\n", totalBill);
                printf("Remaining Seat : %d\n",
                       totalSeats - bookedSeats);
            }
            else
            {
                printf("\nNot Enough Seats Available!\n");
            }
            break;

        case 2:
            printf("\nAvailable Seats: %d\n",
                   totalSeats - bookedSeats);
            break;

        case 3:
            printf("\nThank You!\n");
            return 0;

        default:
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}
