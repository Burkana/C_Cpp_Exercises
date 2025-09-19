#include <iostream>
#include <stdio.h>
#include <math.h> 

int inputValue()
{
    int value;
    scanf("%d", &value);
    return value;
}

int getReceivingDay(int price, int installment) 
{
    if (installment <= 0) {
        return -1;
    }


    int day = (int)ceil((double)price / installment);
    return day;
}

int main()
{
    int price = 0, installment = 0, clientCount = 0;

    printf("What is the price of the laptop: ");
    price = inputValue();
    
    printf("What is the installment amount: ");
    installment = inputValue();
    
    printf("How many clients are there: ");
    clientCount = inputValue();
    
    int receivingDay = getReceivingDay(price, installment);

    if (receivingDay == -1) {
        printf("Error: The installment amount must be greater than zero.\n");
        return 1; 
    }

    for (int i = 0; i < clientCount; i++) {
        printf("Client No_%d will receive their laptop on day %d\n", i + 1, receivingDay);
    }
    
    return 0;
}