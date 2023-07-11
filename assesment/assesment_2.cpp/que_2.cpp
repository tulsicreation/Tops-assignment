#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Event structure
struct Event
{
    int eventId;
    char eventName[50];
    char firstName[50];
    char lastName[50];
    int numGuests;
    int durationMinutes;
};

// Function to add a new event
void addEvent(struct Event events[], int *numEvents)
{
    struct Event newEvent;
    printf("\nEnter Event Details:\n");

    printf("Event ID: ");
    scanf("%d", &newEvent.eventId);

    printf("Event Name: ");
    scanf(" %[^\n]s", newEvent.eventName);

    printf("First Name: ");
    scanf(" %[^\n]s", newEvent.firstName);

    printf("Last Name: ");
    scanf(" %[^\n]s", newEvent.lastName);

    printf("Number of Guests: ");
    scanf("%d", &newEvent.numGuests);

    printf("Duration (in minutes): ");
    scanf("%d", &newEvent.durationMinutes);

    events[*numEvents] = newEvent; // Add the new event to the events array
    (*numEvents)++;                // Increment the count of events

    printf("\nEvent added successfully!\n");
}

// Function to display all events
void displayEvents(struct Event events[], int numEvents)
{
    if (numEvents == 0)
    {
        printf("\nNo events to display.\n");
        return;
    }

    printf("\nEvent List:\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------\n");
    printf("Event ID\tEvent Name\t\tOrganizer\t\tNumber of Guests\t\tDuration (minutes)\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < numEvents; i++)
    {
        printf("%d\t\t%-20s %-20s %-20s %-20d %-20d\n", events[i].eventId, events[i].eventName, events[i].firstName, events[i].lastName, events[i].numGuests, events[i].durationMinutes);
    }

    printf("----------------------------------------------------------------------------------------------------------------------------------\n");
}

// Main program
int main()
{
    struct Event events[100];
    int numEvents = 0;
    int choice;

    printf("Event Organizer\n");

    while (true)
    {
        printf("\n1. Add Event\n");
        printf("2. Display Events\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEvent(events, &numEvents); // Call the addEvent function to add a new event
            break;
        case 2:
            displayEvents(events, numEvents); // Call the displayEvents function to show all events
            break;
        case 3:
            printf("\nExiting...\n");
            return 0; // Exit the program
        default:
            printf("\nInvalid choice. Please try again.\n");
        }
    }

};