#include <stdio.h>
#include <string.h>

// Define the Flight structure
struct Flight {
    int flightNumber;
    char origin[4];
    char destination[4];
    char startTime[6];
    char arrivalTime[6];
};

int main() {
    int numFlights;
    struct Flight flights[100];

    // Read the number of flights from the user
    printf("Enter the number of flights: ");
    scanf("%d", &numFlights);
	int i;
    // Read flight information from the user
    for (i = 0; i < numFlights; i++) {
        printf("\nFlight %d:\n", i + 1);
        printf("Flight Number: ");
        scanf("%d", &flights[i].flightNumber);
        printf("Origin: ");
        scanf("%s", flights[i].origin);
        printf("Destination: ");
        scanf("%s", flights[i].destination);
        printf("Start Time: ");
        scanf("%s", flights[i].startTime);
        printf("Arrival Time: ");
        scanf("%s", flights[i].arrivalTime);
    }

    // Search for flights based on airport code
    char searchAirport[4];
    printf("\nEnter the airport code to search for flights: ");
    scanf("%s", searchAirport);

    // Display flight information for the specified airport
    printf("\nFlights from/to %s:\n", searchAirport);
    int foundFlights = 0;
    for (i = 0; i < numFlights; i++) {
        if (strcmp(flights[i].origin, searchAirport) == 0 || strcmp(flights[i].destination, searchAirport) == 0) {
            printf("Flight Number: %d\n", flights[i].flightNumber);
            printf("Origin: %s\n", flights[i].origin);
            printf("Destination: %s\n", flights[i].destination);
            printf("Start Time: %s\n", flights[i].startTime);
            printf("Arrival Time: %s\n", flights[i].arrivalTime);
            printf("\n");
            foundFlights++;
        }
    }

    // If no flights found, display a message
    if (foundFlights == 0) {
        printf("No flights found for the specified airport.\n");
    }

    return 0;
}

