#include <stdio.h>

int main()
{
    double lev, euro;

    printf("BGN = ");
    scanf("%lf", &lev);

    euro = lev / 1.98;
    printf("EUR = %.2lf", euro);

    return 0;
}
