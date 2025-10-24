#include <stdio.h>

int main()
{
    int Category, Item;

    printf("Select Category: 1. Fruits 2. Drink\n");
    scanf("%d", &Category);

    switch (Category)
    {
    case 1: // Fruits
        printf("Select Item: (1-Apple, 2-Mango): ");
        scanf("%d", &Item);

        switch (Item)
        { // inner switch of fruits
        case 1:
            printf("you choose Apple.\n");
            break;
        case 2:
            printf("you choose Mango.\n");
            break;
        default:
            printf("Choose invalid Option.\n");
        }
        break;

    case 2: // Drink
        printf("Select Drink: (1-Coke, 2-Juice): ");
        scanf("%d", &Item);

        switch (Item)
        { // inner switch of Drink
        case 1:
            printf("You Select Coke.\n");
            break;
        case 2:
            printf("You Select Juice.\n");
            break;
        default:
            printf("Choose Invalid Option.\n");
        }
        break;

    default:
        printf("Invalid Category\n");
        break;
    }
    return 0;
}