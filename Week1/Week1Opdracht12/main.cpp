#include <stdio.h>

int main() {
	int seconden;

	printf("Geef een hoeveelheid seconden aan: ");
	scanf_s("%d", &seconden);

	int uur = (seconden / 3600);
	int minuten = (seconden % 3600) / 60;
	int restseconden = seconden % 60;

	printf("Dit is %d uur, %d minuten, en %d seconden", uur, minuten, restseconden);
}