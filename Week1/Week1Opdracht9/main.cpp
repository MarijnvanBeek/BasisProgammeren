#include <stdio.h>

int main() {
	float kilometeruur;
	float meterseconde;

	printf("Geef de snelheid in kilometer per uur ");
	scanf_s("%f", &kilometeruur);

	meterseconde = (kilometeruur / 3.6);

	printf("De snelheid in meters per second is: %.2f", meterseconde);
}