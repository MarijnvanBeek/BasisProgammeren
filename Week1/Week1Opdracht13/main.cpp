#include <stdio.h>

int main() {
	int getal;

	printf("Geef een getal: ");
	scanf_s("%d", &getal);

	int kwadraad = getal * getal;

	printf("Het kwadraad van dit getal is %d", kwadraad);
}