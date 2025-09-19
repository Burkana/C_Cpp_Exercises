#include <stdio.h>

int main()
{
    float C, F;
    printf("Degrees in Celsius: ");
    scanf("%f", &C);
    F = (C * 9/5) + 32;
    printf("F=%.2f", F);
    return 0;
}
