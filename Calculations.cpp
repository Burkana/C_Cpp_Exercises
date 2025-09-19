#include <stdio.h>
#include <math.h>

int main()
{
    double Expression, x, y, a, b, k;

    printf("x = ");
    scanf("%lf", &x);

    printf("y = ");
    scanf("%lf", &y);

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("k = ");
    scanf("%lf", &k);

    Expression = sqrt(pow(x, 2) - 6 * x + 9);
    printf("Expression1 = %lf", Expression);

    Expression = (sqrt(b) - sqrt(5)) * (sqrt(b) + sqrt(5));
    printf("\nExpression2 = %lf", Expression);

    Expression = sqrt((2 * a - b) / (a + b)) - sqrt(pow(a, 2) - pow(b, 2));
    printf("\nExpression3 = %lf", Expression);

    Expression = sqrt((2 * x) / (y + 9)) + sqrt((x - y) / (2 * x));
    printf("\nExpression4 = %lf", Expression);

    Expression = (x - k) / (4 * x * k) + 1 / (2 * k);
    printf("\nExpression5 = %lf", Expression);

    Expression = a / (pow(a, 2) + pow(b, 2)) + b / (2 * a);
    printf("\nExpression6 = %lf", Expression);

    return 0;
}

