#include <stdio.h>

void main()
{
    int bills[] = {1000, 500, 100, 20, 5, 1};
    float usd, php;

    int remainingAmount, numberToMultiply;
    float total, result;

    printf("Enter amount (USD): ");
    scanf("%f", &usd);

    php = usd * 49.2f;
    printf("\nAmount (USD): $%.2f\n", usd);
    printf("Amount (Peso): Php %.2f\n", php);

    remainingAmount = (int)php;
    
    printf("Denomination\n");

    for (int i = 0; i <= 5; i++)
    {
        numberToMultiply = remainingAmount / bills[i];
        result = numberToMultiply * bills[i];
        total += result;

        if(bills[i] >= 20)
        {
            printf("%d peso bill = %d = Php %.2f\n", bills[i], numberToMultiply, result);
        }
        else
        {
            printf("%d coin bill = %d = Php %.2f\n", bills[i], numberToMultiply, result);
        }

        remainingAmount -= result;
    }

    printf("TOTAL: %.2f", total);
}
