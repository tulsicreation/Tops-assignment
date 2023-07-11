#include <stdio.h>
#include <stdbool.h>

// Food items and their prices
struct MenuItem
{
    char name[20];
    float price;
};

struct MenuItem menu[] = {
    {"Burger", 4.99},
    {"Pizza", 7.99},
    {"Pasta", 5.99},
    {"Salad", 3.99},
    {"Fries", 2.99}};

// Function to display the food items available
void display_menu()
{
    printf("Food Menu:\n");
    int numItems = sizeof(menu) / sizeof(menu[0]);
    for (int i = 0; i < numItems; i++)
    {
        printf("%s: $%.2f\n", menu[i].name, menu[i].price);
    }
}

// Function to calculate the total bill
float calculate_bill(struct MenuItem order[], int numItems)
{
    float total = 0;
    for (int i = 0; i < numItems; i++)
    {
        total += order[i].price;
    }
    return total;
}

// Function to get the user's order
int get_order(struct MenuItem order[])
{
    int numItems = 0;
    char choice[20];
    while (true)
    {
        printf("\nSelect a food item: ");
        display_menu();
        printf("Enter the item name: ");
        scanf("%s", choice);

        bool itemFound = false;
        for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++)
        {
            if (strcmp(choice, menu[i].name) == 0)
            {
                strcpy(order[numItems].name, menu[i].name);
                order[numItems].price = menu[i].price;
                numItems++;
                itemFound = true;
                break;
            }
        }

        if (!itemFound)
        {
            printf("Invalid item!\n");
            continue;
        }

        int quantity;
        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        // Increase quantity if the item is already in the order
        for (int i = 0; i < numItems - 1; i++)
        {
            if (strcmp(order[i].name, order[numItems - 1].name) == 0)
            {
                order[i].price += menu[i].price * quantity;
                numItems--;
                break;
            }
        }

        char more[5];
        printf("Do you want to select more items? (yes/no): ");
        scanf("%s", more);
        if (strcmp(more, "no") == 0)
        {
            break;
        }
    }
    return numItems;
}

// Main program
int main()
{
    printf("Welcome to the Food Billing System!\n");

    struct MenuItem order[10];
    int numItems = get_order(order);

    // Calculate and display the total bill
    float total_bill = calculate_bill(order, numItems);
    printf("\nTotal Bill: $%.2f\n", total_bill);

    return 0;
}
