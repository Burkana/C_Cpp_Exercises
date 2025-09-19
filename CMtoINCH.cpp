#include <stdio.h>

int main()
{
    double cm, inch;

    printf("cm = ");
    scanf("%lf", &cm);

    inch = cm / 2.54;

    printf("inches = %.2lf\n", inch);

    return 0;
}

