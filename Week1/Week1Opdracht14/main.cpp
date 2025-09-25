#include <stdio.h>

int main() {
	int getal;
	int keuze;

	printf("Geef een getal: ");
	scanf_s("%d", &getal);

	printf("Maak een keuze: Wil je **2 (1) of **3 (2) ");
	scanf_s("%d", &keuze);

	if (keuze == 1) {
		int kwadraad = (getal * getal);
		printf("Het kwadraad van dit getal is %d", kwadraad);
	}

	if (keuze == 2) {
		int kwadraad3 = (getal * getal * getal);
		printf("Het getaal tot de macht 3 is %d", kwadraad3);
	}

}