#include <stdio.h>

int main() {
	float excl;
	float incl;

	printf("Geef de prijs van een product exclusief BTW: ");
	scanf_s("%f", &excl);

	incl = (excl * 1.21);
	printf("De prijs van een product inclusief BTW is: %.2f", incl);
}