#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Event structure
struct Event
{
    int eventId;
    char eventName[50];
    char eventDate[20];
    char eventTime[20];
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
    printf("Event Date: ");
    scanf(" %[^\n]s", newEvent.eventDate);
    printf("Event Time: ");
    scanf(" %[^\n]s", newEvent.eventTime);

    events[*numEvents] = newEvent;
    (*numEvents)++;

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
    printf("------------------------------------------------------------------\n");
    printf("Event ID\tEvent Name\tEvent Date\tEvent Time\n");
    printf("------------------------------------------------------------------\n");
    for (int i = 0; i < numEvents; i++)
    {
        printf("%d\t\t%s\t%s\t%s\n", events[i].eventId, events[i].eventName, events[i].eventDate, events[i].eventTime);
    }
    printf("------------------------------------------------------------------\n");
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
            addEvent(events, &numEvents);
            break;
        case 2:
            displayEvents(events, numEvents);
            break;
        case 3:
            printf("\nExiting...\n");
            return 0;
        default:
            printf("\nInvalid choice. Please try again.\n");
        }
    }
}

