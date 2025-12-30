#include <stdio.h>

float calculateBill(int prices[], int qty[], int n)
{
    float total = 0;
    for(int i = 0; i < n; i++)
    {
        total += prices[i] * qty[i];
    }
    return total;
}

int main()
{
    int n = 5;  


    int prices[5] = {120, 80, 150, 60, 100};

    
    char items[5][20] = {
        "Pizza",
        "Burger",
        "Pasta",
        "Sandwich",
        "Cold Drink"
    };

    int qty[5] = {0, 0, 0, 0, 0};
    int choice;

    printf("====================================\n");
    printf("   Online Food Order Simulation\n");
    printf("====================================\n");

    
    printf("\nMenu:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d. %s - Rs.%d\n", i + 1, items[i], prices[i]);
    }


    for(int i = 0; i < n; i++)
    {
        printf("\nEnter quantity for %s (0 if not required): ", items[i]);
        scanf("%d", &qty[i]);
    }

    
    float totalBill = calculateBill(prices, qty, n);
    printf("\n====================================\n");
    printf("              BILL\n");
    printf("====================================\n");

    for(int i = 0; i < n; i++)
    {
        if(qty[i] > 0)
        {
            printf("%s x %d = Rs.%d\n", items[i], qty[i], prices[i] * qty[i]);
        }
    }

    printf("------------------------------------\n");
    printf("Total Amount = Rs. %.2f\n", totalBill);
    printf("====================================\n");

    printf("\nThank you for ordering!\n");

    return 0;

}
