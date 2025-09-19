#include <stdio.h>

int main()
{
    double catFoodPricePerPack = 4.0;
    double dogFoodPricePerPack = 2.50;
    double totalPrice;
    int n;

    printf("How many packs of cat food do you want? ");
    scanf("%d", &n);
    double catFoodTotal = catFoodPricePerPack * n;

    printf("How many packs of dog food do you want? ");
    scanf("%d", &n);
    double dogFoodTotal = dogFoodPricePerPack * n;

    totalPrice = catFoodTotal + dogFoodTotal;

    printf("The total price for cat and dog food is %.2lf\n", totalPrice);

    return 0;
}
