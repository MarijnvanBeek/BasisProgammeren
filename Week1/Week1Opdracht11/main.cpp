#include <stdio.h>

int main() {
	int basis;
	int deler;


	printf("Geef een basis getal: ");
	scanf_s("%d", &basis);

	printf("Geef een getal om mee te delen: ");
	scanf_s("%d", &deler);

	
	int volledig = (basis / deler);
	int rest = (basis % deler);

	
	printf("Je kan dit %d delen, en dan heb je een restant van %d", volledig, rest);
}