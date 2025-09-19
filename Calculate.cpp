#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double Izraz, Izraz2, Izraz3, x, y, a, b;

	printf("x=");
	scanf_s("%lf", &x);

	printf("y=");
	scanf_s("%lf", &y);

	printf("a=");
	scanf_s("%lf", &a);

	printf("b=");
	scanf_s("%lf", &b);

	x = sqrt(pow(x, 2) - 6 * x + 9);
		printf("x =%lf", x);
	



	return 0;
}
