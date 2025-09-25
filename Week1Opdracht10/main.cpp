#include <stdio.h>

int main() {
	float U;
	float I;
	float R;

	printf("Geef aan hoeveel spanning er is ");
	scanf_s("%f", &U);

	printf("Geef aan hoeveel weerstand er is ");
	scanf_s("%f", &R);

	I = (U / R);

	printf("De berekende stroom is: %.2f", I);
}