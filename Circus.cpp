#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double math_price, literature_price, english_price, physics_price, money, circus_price;

    printf("How much money does she have: ");
    scanf("%lf", &money);
    printf("Enter the price of the math textbook: ");
    scanf("%lf", &math_price);
    printf("Enter the price of the literature textbook: ");
    scanf("%lf", &literature_price);
    printf("Enter the price of the English textbook: ");
    scanf("%lf", &english_price);
    printf("Enter the price of the physics textbook: ");
    scanf("%lf", &physics_price);
    printf("Enter the price of the circus in the city: ");
    scanf("%lf", &circus_price);

    money = money - (math_price + literature_price + english_price + physics_price);

    printf("%.2lf Lili has left\n", money);

    if (money >= circus_price) {
        printf("Lili has enough money for the circus.\n");
    }
    else {
        printf("Lili does not have enough money for the circus.\n");
    }
    return 0;
}
