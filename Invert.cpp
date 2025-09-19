#include <stdio.h>

int main()
{
    int a, b;

    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);

    printf("A = Hex: %x", a);
    printf("\nB = Hex: %x", b);

    int inv = a ^ b;

    printf("\nInverted = %d", inv);

    return 0;
}
