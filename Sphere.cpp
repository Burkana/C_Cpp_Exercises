// Kulbo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double V, S, C, a, b, r, h;
	int i,n;
	double const pi = 3.14;

	printf("r=");
	scanf_s("%lf", &r);

	V = (4 * pi * pow(r, 3)) / 3;
	printf("V=%lf", V);

	C = 2 * pi * r;
    printf("\nDuljinata na okrujnosta=%lf", C);



	printf("\na=");
	scanf_s("%lf", &a);

	printf("b=");
	scanf_s("%lf", &b);

	printf("h=");
	scanf_s("%lf", &h);
	 
	printf("n=");
	scanf_s("%d", &n);


	
		printf("\n1:Kvadrat\n");
		printf("2:Pravougulnik\n");
		printf("3:Krug\n");
		printf("4:Triugulnik\n");
		printf("5:Trapec\n");
		printf("6:Usporednik\n");
		printf("7:Mnogougullnik\n");
		printf("\ni=");
		scanf_s("%d", &i);

		switch (i) {

		case 1: S = a * a; break;
		case 2: S = a * b; break;
		case 3: S = pi * pow(r, 2); break;
		case 4: S = (a * h) / 2; break;
		case 5: S = ((a + b) * h) / 2; break;
		case 6: S = a * h; break;
		case 7: S = 1 / 2 * n * b * a; break;

		}
		printf("S=%lf", S);


	
	return 0;
}
