#include "stdio.h"
#include "math.h"

int main() {

	float a, b;
	float z1, z2;

	printf("Enter your a(degree): ");
	scanf_s("%f", &a);

    // Переводимо градуси в радіани
	b = a * 0.0174532925;

	z1 = 1.f - 1.f/4.f*pow(sin(2 * b), 2) + cos(2 * b);
	z2 = pow(cos(b), 2) + pow(cos(b), 4);
	
	printf("Z1 = %f\n", z1);
	printf("Z2 = %f", z2);
	
	return 0;
}