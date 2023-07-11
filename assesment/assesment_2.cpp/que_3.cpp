#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// Event structure
struct Event
{
    int eventId;
    string eventName;
    string firstName;
    string lastName;
    int numGuests;
    int durationMinutes;
    int numServers;
    double totalFoodCost;
    double costForOneServer;
    double averageCost;
    double totalCost;
};

// Constants for cost calculation
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

// Function to add a new event
void addEvent(vector<Event> &events)
{
    Event newEvent;
    cout << "\nEnter Event Details:\n";

    cout << "Event ID: ";
    cin >> newEvent.eventId;

    cout << "Event Name: ";
    cin.ignore(); // Ignore the newline character in the input buffer
    getline(cin, newEvent.eventName);

    cout << "First Name: ";
    getline(cin, newEvent.firstName);

    cout << "Last Name: ";
    getline(cin, newEvent.lastName);

    cout << "Number of Guests: ";
    cin >> newEvent.numGuests;

    cout << "Duration (in minutes): ";
    cin >> newEvent.durationMinutes;

    // Calculate the number of servers required
    newEvent.numServers = ceil(newEvent.numGuests / 20.0);

    // Calculate the cost for one server
    double cost1 = (newEvent.durationMinutes / 60.0) * CostPerHour;
    double cost2 = (newEvent.durationMinutes % 60) * CostPerMinute;
    newEvent.costForOneServer = cost1 + cost2;

    // Calculate the total food cost
    newEvent.totalFoodCost = newEvent.numGuests * CostOfDinner;

    // Calculate the average cost per person
    newEvent.averageCost = newEvent.totalFoodCost / newEvent.numGuests;

    // Calculate the total cost
    newEvent.totalCost = newEvent.totalFoodCost + (newEvent.costForOneServer * newEvent.numServers);

    events.push_back(newEvent); // Add the new event to the events vector

    cout << "\nEvent added successfully!\n";
}

// Function to display all events
void displayEvents(const vector<Event> &events)
{
    if (events.empty())
    {
        cout << "\nNo events to display.\n";
        return;
    }

    cout << "\nEvent List:\n";
    cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "Event ID\tEvent Name\t\tOrganizer\t\tNumber of Guests\t\tDuration (minutes)\tNumber of Servers\tTotal Food Cost\t\tCost for One Server\tAverage Cost per Person\tTotal Cost\n";
    cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

    for (const auto &event : events)
    {
        cout << event.eventId << "\t\t" << event.eventName << "\t\t" << event.firstName << " " << event.lastName << "\t\t" << event.numGuests << "\t\t\t" << event.durationMinutes << "\t\t\t" << event.numServers << "\t\t\t" << event.totalFoodCost << "\t\t\t" << event.costForOneServer << "\t\t\t" << event.averageCost << "\t\t\t" << event.totalCost << "\n";
    }

    cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}

// Main program
int main()
{
    vector<Event> events;
    int choice;

    cout << "Event Organizer\n";

    while (true)
    {
        cout << "\n1. Add Event\n";
        cout << "2. Display Events\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addEvent(events); // Call the addEvent function to add a new event
            break;
        case 2:
            displayEvents(events); // Call the displayEvents function to show all events
            break;
        case 3:
            cout << "\nExiting...\n";
            return 0; // Exit the program
        default:
            cout << "\nInvalid choice. Please try again.\n";
        }
    }

