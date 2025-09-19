#include <stdio.h>

int main()
{
    double area, perimeter, a, b;

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    area = a * b;
    perimeter = 2 * (a + b);  

    printf("Perimeter = %lf\n", perimeter);
    printf("Area = %lf\n", area);

    return 0;
}
