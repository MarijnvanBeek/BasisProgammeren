#include <stdio.h>

int main() {
	int straal;
	int omtrek;
	int oppervlakte;

	printf("Geef de straal van de cirkel aan in meters: ");
	scanf_s("%d", &straal);

	omtrek = 2 * 3.14 * straal;
	oppervlakte = straal * straal * 3.14;

	printf("De omtrek van de cirkel is %d m\n", omtrek);
	printf("De oppervlakte van de cirkel is %d m2", oppervlakte);
}