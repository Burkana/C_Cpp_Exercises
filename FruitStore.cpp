#include <stdio.h>

int main()
{
    float vegPricePerKg, fruitPricePerKg, vegKg, fruitKg;
    float vegTotalBGN, fruitTotalBGN, vegTotalUSD, fruitTotalUSD;
    const float usdRate = 1.78;

    printf("Price per kg of vegetables (BGN): ");
    scanf("%f", &vegPricePerKg);

    printf("Price per kg of fruit (BGN): ");
    scanf("%f", &fruitPricePerKg);

    printf("How many kg of vegetables: ");
    scanf("%f", &vegKg);

    printf("How many kg of fruit: ");
    scanf("%f", &fruitKg);

    vegTotalBGN = vegPricePerKg * vegKg;
    fruitTotalBGN = fruitPricePerKg * fruitKg;

    printf("Vegetables total (BGN): %.2f", vegTotalBGN);
    printf("\nFruit total (BGN): %.2f", fruitTotalBGN);

    vegTotalUSD = vegTotalBGN / usdRate;
    fruitTotalUSD = fruitTotalBGN / usdRate;

    printf("\nVegetables total (USD): %.2f", vegTotalUSD);
    printf("\nFruit total (USD): %.2f", fruitTotalUSD);

    return 0;
}
